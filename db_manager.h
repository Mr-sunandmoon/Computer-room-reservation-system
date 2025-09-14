#pragma once
#include<vector>
#include"dblink.h"
#include"order_info.h"
using namespace std;
//std::unique_ptr<sql::ResultSet> query(const std::string& sql)
//int update(const std::string& sql)
class da_manager :public MySQLDB
{
private:
	// 数据库信息管理
public:
	// 预约信息管理
	// 1.添加
	bool add_order(order_info order_info1);
	// 2.删除
	bool delete_order();
	// 3.查询
	// 参数为1 表示进行全部预约的查询 
	// 参数为2 表示进行所有未审核预约的查询
	std::unique_ptr<sql::ResultSet> inquire_order(int flag);
	// 4.审核预约
	bool update_order(int id);
};