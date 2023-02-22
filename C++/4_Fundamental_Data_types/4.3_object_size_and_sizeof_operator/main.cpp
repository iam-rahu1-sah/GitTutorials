// Program to demonstrate use of sizeof() operator

#include <iostream>
#include <cstdint>
// #include "test.h"

int main()
{
    // size of fundamental data types
    std::cout << "bool: " << sizeof(bool) << '\n';
    std::cout << "char: " << sizeof(char) << '\n';
    std::cout << "wchar_t: " << sizeof(wchar_t) << '\n';
    // std::cout << "char_8: " << sizeof(char_8) << '\n';
    std::cout << "char_16: " << sizeof(char16_t) << '\n';
    std::cout << "char_32: " << sizeof(char32_t) << '\n';
    std::cout << "short: " << sizeof(short) << '\n';
    std::cout << "int: " << sizeof(int) << '\n';
    std::cout << "long: " << sizeof(long) << '\n';
    std::cout << "long long: " << sizeof(long long int) << '\n';
    std::cout << "float: " << sizeof(float) << '\n';
    std::cout << "double: " << sizeof(double) << '\n';
    std::cout << "long double: " << sizeof(long double) << '\n';

    int varName{89};

    // We can also use sizeof operator on a variable
    std::cout << "Size of variable: " << sizeof(varName) << '\n';

    

    return 0;
}
