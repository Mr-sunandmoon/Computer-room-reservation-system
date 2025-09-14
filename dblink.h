#pragma once
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <memory>
#include <string>
#include"order_info.h"
class MySQLDB {
private:
    std::unique_ptr<sql::Connection> conn;
public:
    bool connect(const std::string& host, const std::string& user,
        const std::string& pwd, const std::string& db) {
        try {
            sql::Driver* driver = get_driver_instance();
            conn.reset(driver->connect(host, user, pwd));
            conn->setSchema(db);
            return true;
        }
        catch (sql::SQLException& e) {
            return false;
        }
    }

    std::unique_ptr<sql::ResultSet> query(const std::string& sql) {
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        return std::unique_ptr<sql::ResultSet>(stmt->executeQuery(sql));
    }
    
    int update(const std::string& sql) {
        std::unique_ptr<sql::Statement> stmt(conn->createStatement());
        return stmt->executeUpdate(sql);
    }
    void disconnect() {
        conn->close();
    }
};
