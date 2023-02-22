#include <iostream>
// #include "test.h"

int main()
{  
    // Pefered nomenclature for writing integral data types
    // don't use int prefix with short, long and long long as it make
        // hard to differentiate with int and is unnecessary

    /*Pefered and recommended*/
    short s{20};
    int i{568};
    long l{54631113};
    long long ll{4565325};

    // Integer data types are singed by default and hence adding
    // a signed suffix will compile but is redundant

    /*Redundant and not recommeded*/
    signed short ss{};
    signed int si{};
    signed long sl{};
    signed long long sll{};

    /*Redundant, hard to differentiate and not recommended*/

    signed short int ssi{};
    signed int ssi2{};
    signed long int sli{};
    signed long long int slli{};


    std::cout << "Short: " << sizeof(short) << " Bytes." << '\n';
    std::cout << "Int: " << sizeof(int) << " Bytes." << '\n';
    std::cout << "Long: " << sizeof(long) << " Bytes." << '\n';
    std::cout << "Long long: " << sizeof(signed long long int) << " Bytes." << '\n';

    // Integer overflow

    s = 525657;   // short can only store somewhat around 32000, this is a
                    // case of integer overflow

    std::cout << "S = " << s << '\n';
    // This cases Undefined behaviour.


    // Integer division

    int div{8/5};
    std::cout << "Division of 8 by 5: " << div << '\n';

    return 0;
}
