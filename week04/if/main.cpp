#include<iostream>

int main()
{
    int a{};
    std::cout << "Enter integer 0 through 9 (inclusive): ";
    std::cin >> a;
    
    if (a == 2 || a == 3 || a == 5 || a == 7)
        std::cout << "The digit is prime\n";
    else
        std::cout << "The digit is not prime\n";
    
    return 0;
}
