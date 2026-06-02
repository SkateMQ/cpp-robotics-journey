#include <iostream>

int getInt()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    return num;
}

constexpr bool isEven(int num)
{
    return !(num % 2);
}

int main()
{
    int num{getInt()};
    std::cout << num;
    if (isEven(num))
        std::cout << " is even\n";
    else
        std::cout << " is odd\n";
    return 0;
}
