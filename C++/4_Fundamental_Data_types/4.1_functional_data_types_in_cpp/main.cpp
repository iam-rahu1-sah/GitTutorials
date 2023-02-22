#include<iostream>
// #include"test.h"

int main()
{
    // Floating point data types
    float f1{5.2};
    double d1{8.199999999};
    long double ld1{8.25};

    std::cout << f1 << ' ' << d1 << ' ' << ld1 << '\n';

    // Boolean data types
    bool b{true};
    std::cout << b << '\n';

    // Character data types
    char c{'a'};
    wchar_t wc{'b'};
    char8_t c8{'d'};
    char16_t c16{'c'};
    char32_t c32{'e'};

    std::cout << c << '\n'; 

    // Integer data types
    short s{5};
    int i{899};
    long int li{654};
    long long ll{461312};

    std::cout << s << ' ' << i << ' ' << li << ' ' << ll << '\n';


    // void;
    // std::nullptr;


    return 0;
}