#include<iostream>
#include"student.h"
#include<stdlib.h>
using namespace std;
#include"global.h"
#include"time.h"
#include"info_view.h"
void student::p_order()
{
	cout << "请输入预约相关的信息" << endl;
	cout << "学号:" ;
	cin >> info.student_id;
	cout << "机房号:";
	cin >> info.lab_number;
	cout << "预约日期:";
	cin >> info.reservation_date;
	cout << "预约时间段:";
	cin >> info.reservation_period;
	info.apply_time = get_time();
	info.status = 0;
	if (!db.add_order(info))
	{
		cout << "预约失败" << endl;
	}
	else
	{
		cout << "预约成功" << endl;
	}
	return;
}
void student::o_my_order()
{

}
void student::o_order()
{
	std::unique_ptr<sql::ResultSet> res = db.inquire_order(1);
	view(res);
}
void student::d_order()
{

}
void student::my_menu()
{
	while (1)
	{
		cout << "1.申请预约" << endl;
		cout << "2.查看我的预约" << endl;
		cout << "3.查看所有预约" << endl;
		cout << "4.取消预约" << endl;
		cout << "5.退出登录" << endl;
		int flag = 0;
		cin >> flag;
		switch (flag)
		{
		case 1:
			p_order();
			break;
		case 2:
			o_my_order();
			break;
		case 3:
			o_order();
			break;
		case 4:
			d_order();
			break;
		case 5:
			return;
			break;
		default:
			cout << "输入错误，按任意键继续" << endl;;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
	}	
}