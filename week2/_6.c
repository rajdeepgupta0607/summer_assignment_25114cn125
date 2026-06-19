#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;         // Get the last digit
        reverse = reverse * 10 + remainder; // Append digit to reverse
        num /= 10;                    // Remove the last digit
    }

    // Print the reversed result
    printf("Reversed number = %d\n", reverse);

    return 0;
}
