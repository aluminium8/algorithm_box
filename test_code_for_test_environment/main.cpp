#include <iostream>
#include <string>

void please_input_Hello_world(std::string input_s)
{

    try
    {
        if (input_s != "Hello_world")
        {
            std::string error_s("input string is not Hello_world!! this is " + input_s);
            throw error_s;
        }
        else
        {
            std::cout << input_s << " this is great string!" << std::endl<< std::endl;

        }
    }
    catch (std::string  e)
    {
        std::cout << e <<  std::endl<< std::endl;

    }
}

int main()
{

    std::cout << "first, I'LL input correct string" << std::endl<< std::endl;
    please_input_Hello_world("Hello_world");

    std::cout << "second, I'LL input mistaken string" << std::endl<< std::endl;
    please_input_Hello_world("Hello world");
    std::cout << "program will end here" << std::endl<< std::endl;
}