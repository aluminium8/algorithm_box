#include <iostream>
#include <random>
#include <chrono>

constexpr int make_rnd_num_for_check_value(10), make_rnd_num_for_process_time(1e+7);

int main()
{
    std::cout << "## random number generator" << std::endl;

    std::cout << "### Mersenne twister" << std::endl;
    std::mt19937 engine_A1(1), engine_A2(1), engine_B1(2);
    std::cout << " | name on code |";

    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << i << " | ";
    }

    std::cout << std::endl;

    std::cout << "| ---------------------------------- |";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " |A1 (seed is 1) | ";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << engine_A1() << " | ";
    }
    std::cout << std::endl;

    std::cout << " |A2 (seed is 1 as same as A1) | ";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << engine_A2() << " | ";
    }
    std::cout << std::endl;

    std::cout << " |B2 (seed is 2) | ";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << engine_B1() << " | ";
    }
    std::cout << std::endl;

    std::cout << "###  std::random_device(nondeterministic) " << std::endl;
    std::random_device rnd;
    std::cout << " |name on code |";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << i << " | ";
    }
    std::cout << std::endl;

    std::cout << "| --------------------- |";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << "--------------- | ";
    }
    std::cout << std::endl;

    std::cout << " | (this engine can't use seed) | ";
    for (int i = 0; i < make_rnd_num_for_check_value; i++)
    {
        std::cout << rnd() << " | ";
    }
    std::cout << std::endl;

    std::cout << "### processing time on generate " << std::endl;
    std::cout<<"I'll check for 10^7 generating time "<<std::endl<<std::endl;
    std::cout<<"Note: Be aware that compiler optimizations killed"<<std::endl<<std::endl;
    
    std::mt19937 engine_C1(1);
    std::random_device rnd2;

    std::chrono::system_clock::time_point start, end;

    start = std::chrono::system_clock::now();

    for (int i = 0; i < make_rnd_num_for_process_time; i++)
    {
        int tmp = engine_C1();
    }

    end = std::chrono::system_clock::now();

    double mt_time = static_cast<double>(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000.0);
    std::cout << "mt19937 time is " << mt_time << "[ms]" << std::endl<<std::endl;

    start = std::chrono::system_clock::now();

    for (int i = 0; i < make_rnd_num_for_process_time; i++)
    {
        int tmp = rnd2();
    }

    end = std::chrono::system_clock::now();

    double rnd_time = static_cast<double>(std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() / 1000.0);
    std::cout << "std::random_device time is " << rnd_time << "[ms]" << std::endl<<std::endl;
}