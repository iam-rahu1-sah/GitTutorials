#include <iostream>
#include "test.h"

void doNothing()
{
#define MY_NAME "Rahul Sah"
}

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';
    return 0;
}