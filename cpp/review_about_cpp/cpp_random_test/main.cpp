#include <iostream>
#include <random>
#include <chrono>

constexpr int make_rnd_num(10);

int main()
{
    std::cout << "## random number generator" << std::endl;

    std::cout << "### Mersenne twister" << std::endl;
    std::mt19937 engine_A1(1), engine_A2(1), engine_B1(2);
    std::cout << " | name on code |";

    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << i << " | ";
    }

    std::cout << std::endl;

    std::cout << "| --------------------- |";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " |A1 (seed is 1) | ";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << engine_A1() << " | ";
    }
    std::cout << std::endl;

    std::cout << " |A2 (seed is 1 as same as A1) | ";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << engine_A2() << " | ";
    }
    std::cout << std::endl;

    std::cout << " |B2 (seed is 2) | ";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << engine_B1() << " | ";
    }
    std::cout << std::endl;

    std::cout << "###  std::random_device(nondeterministic) " << std::endl;
    std::random_device rnd;
    std::cout << " |name on code |";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << i << " | ";
    }
    std::cout << std::endl;

    std::cout << "| --------------------- |";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " | (this engine can't use seed) | ";
    for (int i = 0; i < make_rnd_num; i++)
    {
        std::cout << rnd() << " | ";
    }
    std::cout << std::endl;
}