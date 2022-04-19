#include <chrono>
#include <iostream>
#include <string>

int main()
{
    std::time_t ct = std::time(0);
    std::string test = std::string(ctime(&ct));
    std::cout << test << std::endl;
    return 0;
}