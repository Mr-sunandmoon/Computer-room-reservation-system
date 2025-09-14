#pragma once
#include"string"

struct order_info {
    int id;
    std::string student_id;
    int lab_number;
    std::string reservation_date;
    std::string reservation_period;
    std::string apply_time; // 由于datetime类型在C++中可以用字符串格式存储
    int status; // tinyint类型在C++中可以使用int来表示
};