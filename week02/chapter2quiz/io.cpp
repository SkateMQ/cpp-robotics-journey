#include "io.h" // source files should include their pair headers
#include <iostream> // pair header first, standard library last

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
