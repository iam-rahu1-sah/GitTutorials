#include <iostream>
// #include"test.h"

    // Void data type use cases:

    // 1. Non value returning function

    void printHello()
    {
        std::cout << "Hello!" << '\n';
    }

    // 2. Functions that do not take parameters
    // (still used in C but is deprecated in C++)

    int getNum(void)
    {
        std::cout << "Enter a number: ";
        int num{};
        std::cin >> num;
        return num;
    }
    // This is compatiable in C++ for backward compatability
    // 3. Advance use : void pointer
int main()
{
    printHello();
    getNum();
    return 0;
}