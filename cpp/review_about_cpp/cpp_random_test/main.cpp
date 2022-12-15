#include <iostream>
#include <random>

int main()
{

    std::mt19937 engine_A1(1), engine_A2(1), engine_B1(2);

    
    for (int i = 1; i < 10; i++)
    {
        std::cout << engine_A1() << " ";
    }
    std::cout << std::endl;
    for (int i = 1; i < 10; i++)
    {
        std::cout << engine_A2() << " ";
    }
    std::cout << std::endl;
    for (int i = 1; i < 10; i++)
    {
        std::cout << engine_B1() << " ";
    }
    std::cout << std::endl;
}