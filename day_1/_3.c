#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Used to store large results

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Factorial is not defined for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to multiply numbers from 1 to n
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
