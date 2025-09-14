#pragma once
#include<string>
using namespace std;
class identity
{
private:
	string name;
	string password;
public:
	// 纯虚函数 需要子类继承并修改
	virtual void my_menu() = 0;  
};