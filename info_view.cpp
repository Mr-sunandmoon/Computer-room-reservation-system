#include"info_view.h"
void view(std::unique_ptr<sql::ResultSet>& res)
{
    while (res->next()) {
        int id = res->getInt("id");
        std::string student_id = res->getString("student_id");
        int lab_number = res->getInt("lab_number");
        std::string reservation_date = res->getString("reservation_date");
        
        std::string reservation_period = res->getString("reservation_period");
        std::string apply_time = res->getString("apply_time");
        int status = res->getInt("status");

        std::cout << "ID: " << id
            << ", Student ID: " << student_id
            << ", Lab Number: " << lab_number
            << ", Reservation Date: " << reservation_date
            << std::endl
            << ", Reservation Period: " << reservation_period
            << ", Apply Time: " << apply_time
            << ", Status: " << status
            << std::endl;
    }
    system("pause");
}