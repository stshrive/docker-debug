#include <iostream>
#include "library.h"

int main(int argc, char ** argv)
{
    int a;
    int b;

    std::cout << "Enter two numbers to add together" << std::endl;

    std::cin >> a;
    std::cin >> b;

    std::cout << "Adding "  << a << " and " << b    << std::endl;
    std::cout << "Result: " << LibAddIntegers(a, b) << std::endl;
    return 0;
}
