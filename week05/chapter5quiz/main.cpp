#include <iostream>
#include <string>

std::string getName(int personNum)
{
    std::cout << "Enter the name of person #" << personNum << ": ";
    std::string person{};
    std::getline(std::cin >> std::ws, person);
    return person;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

void printOlder(std::string_view person1, int age1, std::string_view person2, int age2)
{
    if (age1 > age2)
        std::cout << person1 << " (age " << age1 << ") is older than " << person2 << " (age " << age2 << ").";
    else if (age1 == age2)
        std::cout << person1 << " (age " << age1 << ") and " << person2 << " (age " << age2 << ") have the same age.";
    else
        std::cout << person2 << " (age " << age2 << ") is older than " << person1 << " (age " << age1 << ").";

    std::cout << '\n';
}

int main()
{
    const std::string person1{getName(1)};
    const int age1{getAge(person1)};

    const std::string person2{getName(2)};
    const int age2{getAge(person1)};

    printOlder(person1, age1, person2, age2);

    return 0;
}
