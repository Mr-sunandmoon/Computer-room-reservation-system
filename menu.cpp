#include"menu_view.h"
#include"student.h"
#include"teacher.h"
#include"manager.h"
#include<iostream>
#include<stdlib.h>
using namespace std;
menu::menu(identity* iden)
{
	this->iden = iden;
}
menu::menu()
{

}
void menu::main_menu()
{
	while (1)
	{
		cout << "---------欢迎使用机房预约系统----------" << endl;
		cout << "---------      登录选择      ----------" << endl;
		cout << "---------      1.学生        ----------" << endl;
		cout << "---------      2.教师        ----------" << endl;
		cout << "---------      3.管理员      ----------" << endl;
		cout << "---------      0.退出        ----------" << endl;
		cout << "---------------------------------------" << endl;
		int flag = 4;
		cout << "请输入您的选择" << endl;
		cin >> flag;
		
		switch (flag)
		{
		case 1:  //学生
			iden = new student();
			iden->my_menu();
			delete iden;
			break;
		case 2: // 教师
			iden = new teacher();
			iden->my_menu();
			delete iden;
			break;
		case 3: // 管理员
			iden = new manager();
			iden->my_menu();
			delete iden;
			break;
		case 0:
			cout << "欢迎下次使用\n" << endl;
			system("pause");
			return ;
			break;
		default:
			cout << "输入错误，按任意键继续" << endl;
			system("pause");
			system("cls");
			break;
		}
		system("cls");
	}
	
	cout << "程序运行结束" << endl;
	system("pause");
}