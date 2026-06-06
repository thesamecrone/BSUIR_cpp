#include <cstdio>

int main() {
    double a, b, c;

    printf("Enter a, b, c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Error: Invalid input. Please enter numbers.\n");
        return 1;
    }

    if (b == -10.0) {
        printf("Error: Global division by zero. Variable b cannot be -10.\n");
        return 1;
    }
    if (c == 0.0) {
        printf("Error: Global division by zero. Variable c cannot be 0.\n");
        return 1;
    }

    printf("---------------------\n");
    printf("|    x    |    F    |\n");
    printf("---------------------\n");

    double x = -1.0;
    
    while (x <= 1.0 + 0.00001) {
        double F;
        bool is_error = false;

        if (x < 0 && b != 0) {
            F = a - (x / (10.0 + b));
        }
        else if (x > 0 && b == 0) {
            if (x == c) {
                is_error = true;
            } else {
                F = (x - a) / (x - c);
            }
        }
        else {
            F = 3.0 * x + (2.0 / c);
        }

        if (is_error) {
            printf("|  %5.2f  |  Error  |\n", x);
        } else {
            printf("|  %5.2f  |  %5.2f  |\n", x, F);
        }

        x += 0.05;
    }

    printf("---------------------\n");

    return 0;
}