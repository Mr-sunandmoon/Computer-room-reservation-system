#include<iostream>
#include"manager.h"
#include<stdlib.h>
using namespace std;
void manager::my_menu()
{
	while (1)
	{
		cout << "1.添加账号" << endl;
		cout << "2.查看账号" << endl;
		cout << "3.查看机房" << endl;
		cout << "4.清空预约" << endl;
		cout << "5.退出登录" << endl;
		int flag = 0;
		cin >> flag;
		switch (flag)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			return;
			break;
		default:
			cout << "输入错误，按任意键继续" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
	}
}