#pragma once
#include"identity.h"
class teacher :public identity
{
public:
	void my_menu();
private:
	// 查看所有预约
	void find_all_order();
	// 审核预约
	void pass_order();
	// 注销登录
	void exit_name();
};