#include <iostream>
// #include "test.h"

int main()
{
    // Unsigned integer representation in C++
    unsigned short us{};
    unsigned int ui{};
    unsigned long ul{};
    unsigned long long ull{};


    // Unsigned integer overflow or module wrapping

    // For overflow as a positive integer
    // wrapped value = value%(MAX_VALUE_OF_TYPE + 1)

    us = 65538%(65535+1);           // output = 65538%65535+1
    std::cout << us << '\n';

    // for overflow as a negative integer
    // output = MAX_VALUE_OF_TYPE + value

    ui = -2;
    std::cout << ui << '\n';
    return 0;
};

