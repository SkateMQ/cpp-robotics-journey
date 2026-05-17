#include<iostream>

double getHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height{};
    std::cin >> height;
    return height;
}

double calDistanceFallen(int second)
{
    return 9.8 * static_cast<double>(second) * static_cast<double>(second) / 2.0;
}

void printHeight(double towerHeight, int second)
{
    double currentHeight = towerHeight - calDistanceFallen(second);
    if (currentHeight > 0)
        std::cout << "At " << second << " seconds, the ball is at height: " << currentHeight << " meters\n";
    else
        std::cout << "At " << second << " seconds, the ball is on the ground.\n";
}

int main()
{
    double height{getHeight()};
    printHeight(height, 0);
    printHeight(height, 1);
    printHeight(height, 2);
    printHeight(height, 3);
    printHeight(height, 4);
    printHeight(height, 5);
    return 0;
}
