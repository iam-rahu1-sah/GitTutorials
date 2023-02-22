#include<iostream>
// #include"test.h"

int getInteger();
int main()
{
    int x{getInteger()};
    int y{getInteger()};

    std::cout << x << " + " << y << " = " << x + y << '\n';
    return 0;
}