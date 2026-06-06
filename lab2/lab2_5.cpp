#include <iostream>
#include <cmath>

int main() {
    double x, y, z;

    while (true) {
        std::cout << "Enter three distinct numbers (x, y, z): ";
        
        if (!(std::cin >> x >> y >> z)) {
            std::cerr << "Error: Invalid input. Please enter numbers." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (x == y || y == z) {
            std::cerr << "Error: Numbers in pairs (x,y) and (y,z) must be distinct. Try again." << std::endl;
            continue;
        }

        break;
    }

    double min_xy = (x < y) ? x : y;
    double max_yz = (y > z) ? y : z;

    double p = std::abs(min_xy - max_yz) / 2.0;

    std::cout << "\n[Calculation successful]" << std::endl;
    std::cout << "min(x, y) = " << min_xy << std::endl;
    std::cout << "max(y, z) = " << max_yz << std::endl;
    std::cout << "Result p = " << p << std::endl;

    return 0;
}