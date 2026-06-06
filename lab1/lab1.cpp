#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double alpha;

    std::cout << "Enter alpha value (in degrees): ";
    std::cin >> alpha;

    alpha = alpha * 3.141592653589793 / 180.0;

    double z2 = 2 * sin(alpha);
    double numerator = sin(2*alpha) + sin(5*alpha) - sin(3*alpha);
    double denominator = cos(alpha) + 1 - 2 * sin(2*alpha) * sin(2*alpha);
    
    double z1 = numerator / denominator;

    std::cout << std::fixed << std::setprecision(8);
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    return 0;
}