#include "time.h"

std::string get_time()
{
    auto now = std::chrono::system_clock::now();

    // 将时间点转换为time_t
    std::time_t now_c = std::chrono::system_clock::to_time_t(now);

    // 使用localtime_s函数获取本地时间
    std::tm localTime;
    localtime_s(&localTime, &now_c);  // 注意参数顺序

    // 使用stringstream和put_time格式化时间
    std::stringstream ss;
    ss << std::put_time(&localTime, "%Y-%m-%d %H:%M:%S");
    // std::cout << "Current time: " << ss.str() << std::endl;
    return ss.str();
}
