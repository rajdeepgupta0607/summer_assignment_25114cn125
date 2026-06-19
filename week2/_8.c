#include <stdio.h>

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Loop to reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Append to reversed number
        num /= 10;                     // Remove the last digit
    }

    // Check if the original number matches the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
