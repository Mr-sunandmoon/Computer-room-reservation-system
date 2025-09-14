#include"db_manager.h"
#include"order_info.h"
bool da_manager::add_order(order_info order_info1)
{
    std::string sql = "INSERT INTO lab_reservation "
        "(student_id, lab_number, reservation_date, reservation_period, apply_time, status) "
        "VALUES ('" + order_info1.student_id + "', "
        + std::to_string(order_info1.lab_number) + ", '"
        + order_info1.reservation_date + "', '"
        + order_info1.reservation_period + "', '"
        + order_info1.apply_time + "', "
        + std::to_string(order_info1.status) + ");";
    return update(sql) > 0;
}
bool da_manager::delete_order()
{
    std::string sql = "TRUNCATE TABLE lab_reservation;";
    return update(sql) > 0;
}
// 参数为1 表示进行全部预约的查询 
// 参数为2 表示进行所有未审核预约的查询
std::unique_ptr<sql::ResultSet> da_manager::inquire_order(int flag)
{
    if (flag == 1)
    {
        std::string sql = "SELECT * FROM lab_reservation;";
        return (query(sql));
    }
    if (flag == 2)
    {
        std::string sql = "SELECT * FROM lab_reservation where status = 0;";
        return (query(sql));
    }
    return nullptr;
}
bool da_manager::update_order(int id)
{
    std::string sql = "UPDATE lab_reservation "
        "set status = 1 where id = " + std::to_string(id) + ";";
    return update(sql) > 0;
}