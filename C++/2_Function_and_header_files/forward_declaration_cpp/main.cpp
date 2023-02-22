#include<iostream>

// This is a function declaration or a function prototype
int add(int x, int y);
int add(int x, int y);


// This is also a valid function prototype
// int add(int, int)         -- but this is not preferedB
int main()
{
    std::cout << "The sum of 4 + 5 is: " << add(4,5) << '\n';

    return 0;
}


// Here the function add() is defined after the main() function and 
// without the forward declaration the main function won't know about
// the existence of such a function

int add(int x, int y)
{
    return x + y;
}