#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x = 0.0374;
    double y = -0.825;
    double z = 16.0;

    double numerator1 = 1 + sin(x + y) * sin(x + y);
    double denominator1 = fabs(x - (2.0 * y) / (1.0 + x * x * y * y));
    double part1 = numerator1 / denominator1;

    double part2 = pow(x, fabs(y));

    double angle = atan(1.0 / z);
    double part3 = cos(angle) * cos(angle);

    double v = part1 * part2 + part3;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "v = " << v << std::endl;

    return 0;
}