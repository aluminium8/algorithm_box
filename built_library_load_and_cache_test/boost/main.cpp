#include <boost/version.hpp>
#include <iostream>

int main() {
    std::cout<<"## Boost"<<std::endl;
    std::cout << BOOST_VERSION << "\n" // 104601
              << BOOST_LIB_VERSION "\n"; // 1_46_1
}