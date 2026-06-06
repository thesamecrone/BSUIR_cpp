#include <cstdio>

int main() {
    int n;

    printf("Enter n (from 0 to 20): ");
    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (n < 0 || n > 20) {
        printf("Error: Number must be between 0 and 20.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}