#include <cstdio>
#include <cmath>

int main() {
    const double a = 0.1;
    const double b = 1.0;
    const double h = 0.1;
    const int n = 20;
    const double PI = 3.14159265358979323846;

    printf("---------------------------------------------------------\n");
    printf("|    x    |    S(x)    |    Y(x)    |   |Y(x) - S(x)|   |\n");
    printf("---------------------------------------------------------\n");

    for (double x = a; x <= b + 0.00001; x += h) {
        
        double S = 0.0;
        double term_base = 1.0;

        for (int k = 0; k <= n; k++) {
            if (k > 0) {
                term_base *= (x / k);
            }
            double current_term = cos((k * PI) / 4.0) * term_base;
            S += current_term;
        }

        double Y = exp(x * cos(PI / 4.0)) * cos(x * sin(PI / 4.0));

        double diff = fabs(Y - S);

        printf("|  %5.1f  | %10.7f | %10.7f |    %11.9f    |\n", x, S, Y, diff);
    }

    printf("---------------------------------------------------------\n");

    return 0;
}