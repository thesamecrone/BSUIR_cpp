#include <iostream>

int main() {
    double x, y;

    std::cout << "Enter coordinates (x and y): ";
    std::cin >> x >> y;

    std::string result = ((x >= 2 && y >= 0) || (x >= 1 && y <= -1)) ? "Plus" : "Minus";

    std::cout << result << std::endl;

    return 0;
}