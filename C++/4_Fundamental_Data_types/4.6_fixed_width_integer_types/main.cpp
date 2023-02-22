// Program to demonstrate fixed-width integers
#include <iostream>
#include <cstdint>
// #include "test.h"

int main()
{
    // Fixed width integer data types
    std::int8_t eightBit{};
    std::uint8_t ueightBit{};
    std::int16_t sixteenBit{};
    std::uint16_t usixteenBit{};
    std::int32_t twentyTwoBit{};
    std::uint32_t utwentyTwoBit{};
    std::int64_t sixtyFourBit{};
    std::uint64_t usixtyFourBit{};

    std::cout << "8 bit integer data type: " << sizeof(int8_t) << '\n';
    std::cout << "8 bit unsigned integer data type: "<< sizeof(uint8_t) << '\n';
    std::cout << "8 bit integer data type: " << sizeof(int16_t) << '\n';
    std::cout << "8 bit unsigned integer data type: "<< sizeof(uint16_t) << '\n';
    std::cout << "8 bit integer data type: " << sizeof(int32_t) << '\n';
    std::cout << "8 bit unsigned integer data type: "<< sizeof(uint32_t) << '\n';
    std::cout << "8 bit integer data type: " << sizeof(int64_t) << '\n';
    std::cout << "8 bit unsigned integer data type: "<< sizeof(uint64_t) << '\n';

    // Fast integer data types with minimum bits
    // Here except for fast8_t every other type is using 64 bits which is useless and
    // waste of memmory if we only need 32 or 16 bit
    std::cout << "Size of fast8_t: " << sizeof(int_fast8_t)*8 << " bits." << '\n';
    std::cout << "Size of fast16_t: " << sizeof(int_fast16_t)*8 << " bits." << '\n';
    std::cout << "Size of fast32_t: " << sizeof(int_fast32_t)*8 << " bits." << '\n';
    std::cout << "Size of fast64_t: " << sizeof(int_fast64_t)*8 << " bits." << '\n';

    // Least integer data types
    std::cout << "Size of least8_t: " << sizeof(int_least8_t)*8 << " bits." << '\n';
    std::cout << "Size of least16_t: " << sizeof(int_least16_t)*8 << " bits." << '\n';
    std::cout << "Size of least32_t: " << sizeof(int_least32_t)*8 << " bits." << '\n';
    std::cout << "Size of least64_t: " << sizeof(int_least64_t)*8 << " bits." << '\n';


    // size_t is the types that represent the size of and object in widht
    // size returning functions like sizeof() operator returns size_t
    std::cout << "Size of siz_t operator: " << sizeof(size_t) << '\n';

    
    return 0;
}
