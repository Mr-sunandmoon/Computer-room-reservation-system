#pragma once
#include <cppconn/driver.h>
#include <cppconn/connection.h>
#include <cppconn/statement.h>
#include <cppconn/resultset.h>
#include <memory>
#include <string>
#include"order_info.h"
#include<stdlib.h>
void view(std::unique_ptr<sql::ResultSet>& res);