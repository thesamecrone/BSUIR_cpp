#include <iostream>

int main()
{
    int year;

    std::cout << "Enter a year: ";
    std::cin >> year;

    if (year < 2026)
    {
        std::cout << "This is the past." << std::endl;
    }
    else if (year == 2026)
    {
        std::cout << "This is the present." << std::endl;
    }
    else
    {
        std::cout << "This is the future." << std::endl;
    }

    if (year % 2 == 0)
    {
        std::cout << "Even year." << std::endl;
    }
    else
    {
        std::cout << "Odd year." << std::endl;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        std::cout << "Leap year." << std::endl;
    }
    else
    {
        std::cout << "Not a leap year." << std::endl;
    }

    return 0;
}