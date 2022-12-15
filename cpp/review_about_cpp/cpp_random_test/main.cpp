#include <iostream>
#include <random>

int main()
{
    std::cout << "# random number generator" << std::endl;

    std::mt19937 engine_A1(1), engine_A2(1), engine_B1(2);
    std::cout << " | engine is mt19937";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " | ";
    }
    std::cout << std::endl;

    std::cout << "|---------------------|";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " | seed is 1";
    for (int i = 0; i < 10; i++)
    {
        std::cout << engine_A1() << " | ";
    }
    std::cout << std::endl;

    std::cout << " | seed is 1";
    for (int i = 0; i < 10; i++)
    {
        std::cout << engine_A2() << " | ";
    }
    std::cout << std::endl;

    
    std::cout << " | seed is 2";
    for (int i = 0; i < 10; i++)
    {
        std::cout << engine_B1() << " | ";
    }
    std::cout << std::endl;
}