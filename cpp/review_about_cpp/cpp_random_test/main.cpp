#include <iostream>
#include <random>

int main()
{
    std::cout << "## random number generator" << std::endl;

    std::cout <<"### Mersenne twister"<<std::endl;
    std::mt19937 engine_A1(1), engine_A2(1), engine_B1(2);
    std::cout << " | engine is mt19937 |";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " | ";
    }
    std::cout << std::endl;

    std::cout << "| --------------------- |";
    for (int i = 0; i < 10; i++)
    {
        std::cout <<  "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " | seed is 1 | ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << engine_A1() << " | ";
    }
    std::cout << std::endl;

    std::cout << " | seed is 1 | ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << engine_A2() << " | ";
    }
    std::cout << std::endl;

    
    std::cout << " | seed is 2 | ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << engine_B1() << " | ";
    }
    std::cout << std::endl;

    std::cout <<"###  std::random_device"<<std::endl;
    std::random_device rnd;
    std::cout << " | engine is std::random_device(nondeterministic) |";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " | ";
    }
    std::cout << std::endl;

    std::cout << "| --------------------- |";
    for (int i = 0; i < 10; i++)
    {
        std::cout <<  "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " | (this engine can't use seed) | ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << rnd() << " | ";
    }
    std::cout << std::endl;

   
}