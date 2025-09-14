#pragma once
#include<iostream>
#include<stdlib.h>
#include"order_info.h"
#include"db_manager.h"

#define student_user 0 // 表示对学生账号的操作
#define teacher_user 1 // 表示对教师账号的操作
#define manager_user 2 // 表示对管理员账号的操作
#define order 3 // 表示对预约表的操作
#define computer_lab 4 // 表示对机房表的操作

extern da_manager db;

// 结构体1: 用户信息表
struct teacher_info {
    int id;
    std::string username;
    std::string password;
};

// 结构体2: 实现预约记录


// 结构体3: 实现机房状态
struct lab_info {
    int lab_id;
    int status; // tinyint(1)类型在C++中可以使用int来表示
};

// 结构体4: 学生用户信息，与结构体1相同
struct student_info {
    int id;
    std::string username;
    std::string password;
};

// 结构体5: 管理员用户信息，与结构体1相同
struct manager_info {
    int id;
    std::string username;
    std::string password;
};