#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<io.h>
#include<fcntl.h>
#include"menu_view.h"
#include"dblink.h"
#include"time.h"
#include"global.h"
using namespace std;

// 定义全局变量
da_manager db;

// 设置控制台编码为UTF-8
void setConsoleUTF8() {
    // 设置控制台代码页为UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    // 设置控制台字体支持中文
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 16;
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL;
    wcscpy_s(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}

void link_db()
{
    if (db.connect("tcp://localhost:3306", "root", "123456", "computer_room_reservation")) {
        /*auto res = db.query("SELECT id, student_id FROM lab_reservation");
        while (res->next()) {
            int id = res->getInt("id");
            std::string name = res->getString("student_id");
            std::cout << "ID: " << id << ", student: " << name << std::endl;
        }*/
        cout << "数据库连接成功" << endl;
    }
    else {
        std::cerr << "Failed to connect to database." << std::endl;
    }
}
void unlink_db()
{
    db.disconnect();
    cout << "数据库断开连接" << endl;
}
int main()
{
    // 设置控制台编码
    setConsoleUTF8();
    
    link_db();
	// 实例化一个menu对象
	menu main_menu;
	main_menu.main_menu();
	// 实例化student teacheer manager对象
    unlink_db();
	return 0;
}