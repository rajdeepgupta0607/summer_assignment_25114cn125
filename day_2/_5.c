#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, remainder, sum = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Convert negative numbers to positive for digit accumulation
    int temp = abs(num);

    // Loop to extract and add digits
    while (temp > 0) {
        remainder = temp % 10;  // Extract the last digit
        sum += remainder;       // Add the digit to sum
        temp /= 10;            // Remove the last digit
    }

    // Display the final result
    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}
