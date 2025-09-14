#pragma once
#include"identity.h"
#include"order_info.h"
#include"global.h"
class student :public identity
{
private:
	order_info info;
	void p_order();
	void o_my_order();
	void o_order();
	void d_order();
public:
	void my_menu();
};