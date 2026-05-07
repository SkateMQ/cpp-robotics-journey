#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer to add: ";
    int input{};
    std::cin >> input;
    return input;
}

void writeAnswer(int x)
{
    std::cout << "The answer is : " << x << "\n.";
}
