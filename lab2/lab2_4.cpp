#include <iostream>
#include <cmath>

int main()
{
    double z, b;

    std::cout << "Enter z and b: ";
    if (!(std::cin >> z >> b))
    {
        std::cerr << "Error: Invalid input. Please enter numbers." << std::endl;
        return 1;
    }

    double x = 0;

    if (z < 1)
    {
        if (b == 0)
        {
            std::cerr << "Error: Division by zero is impossible (b = 0)." << std::endl;
            return 1;
        }

        x = z / b;
        std::cout << "[Option 1 used]: z < 1. Formula used: x = z / b" << std::endl;
    }
    else
    {
        if (b < 0)
        {
            std::cerr << "Error: Cannot take the square root of a negative number (b < 0)." << std::endl;
            return 1;
        }

        x = std::sqrt(std::pow(z * b, 3));
        std::cout << "[Option 2 used]: z >= 1. Formula used: x = sqrt((z * b)^3)" << std::endl;
    }

    double y = -M_PI + std::pow(std::cos(std::pow(x, 3)), 2) + std::pow(std::sin(std::pow(x, 2)), 3);

    std::cout << "Calculated x = " << x << std::endl;
    std::cout << "Result y = " << y << std::endl;

    return 0;
}