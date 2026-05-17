#include<iostream>

double getInputNum()
{
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;
    return input;
}

char getSymbol()
{
    std::cout << "Enter +, -, *, or /: ";
    char symbol{};
    std::cin >> symbol;
    return symbol;
}

void printResult(double x, double y, char s)
{
    if (s == '+')
        std::cout << x << " + " << y << " is " << x + y << '\n';
    else if (s == '-')
        std::cout << x << " - " << y << " is " << x - y << '\n';
    else if (s == '*')
        std::cout << x << " * " << y << " is " << x * y << '\n';
    else if (s == '/')
        std::cout << x << " / " << y << " is " << x / y << '\n';
}

int main()
{
    double x{getInputNum()};
    double y{getInputNum()};
    char s{getSymbol()};
    printResult(x, y, s);
    return 0;
}
