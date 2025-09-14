#include"teacher.h"
#include<iostream>
#include"db_manager.h"
#include"global.h"
#include"info_view.h"
using namespace std;
void teacher::find_all_order()
{
	std::unique_ptr<sql::ResultSet> res = db.inquire_order(1);
	view(res);
}
// 审核预约
void teacher::pass_order()
{
	std::unique_ptr<sql::ResultSet> res = db.inquire_order(2);
	
	while (res->next())
	{
		
		std::cout << "以下是待审核的预约" << endl;
		view(res);
		int  flag = 0;
		cout << "请输入要审核的预约的id号 " ;
		cin >> flag;
		if (db.update_order(flag))
		{
			cout << "该预约已经审核通过" << endl;
			system("pause");
		}
		else
		{
			cout << "审核功能该预约审核未通过" << endl;
			system("pause");
		}
		res = db.inquire_order(2);
	}
	cout << "已经没有需要审核的预约啦";
}
void teacher::my_menu()
{
	while (1)
	{
		cout << "1.查看所有预约" << endl;
		cout << "2.审核预约" << endl;
		cout << "3.退出登录" << endl;
		int flag = 4;
		cin >> flag;
		switch (flag)
		{
		case 1:
			find_all_order();
			break;
		case 2:
			pass_order();
			break;
		case 3:
			return ;
			break;
		default:
			cout << "没有此选项，按任意键继续" << endl;
			system("cls");
			break;
		}
		system("cls");
	}
}