#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";
    
    int x{};
    int y{};

    std::cin >> x >> y;
    std::cout << "You entered " << x << " and " << y << "\n";

    std::cout << "Enter two numbers again: ";
    
    int n{};

    std::cin >> n;

    int m{};

    std::cin >> m;

    std::cout << "You entered " << n << " and " << m << "\n";

    return 0;
}
