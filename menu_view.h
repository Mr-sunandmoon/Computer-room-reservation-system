#pragma once
#include"identity.h"
class menu {
private:
	identity* iden;
public:
	menu();
	menu(identity* iden);
	void main_menu();
};