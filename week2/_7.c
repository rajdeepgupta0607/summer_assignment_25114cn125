#include <stdio.h>

int main() {
    int num, temp, remainder;
    long product = 1;

    // Ask the user for input
    printf("Enter any integer: ");
    scanf("%d", &num);

    // Keep a backup of the original number
    temp = num;

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Special case for zero
    if (num == 0) {
        product = 0;
    } else {
        // Loop to isolate and multiply each digit
        while (num > 0) {
            remainder = num % 10;   // Extract the last digit
            product *= remainder;   // Multiply it with the existing product
            num /= 10;              // Remove the last digit
        }
    }

    // Display the final result
    printf("The product of the digits of %d is: %ld\n", temp, product);

    return 0;
}
