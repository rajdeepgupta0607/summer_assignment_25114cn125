#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Make a temporary copy to keep the original number unchanged
    long long temp = num;

    // Handle negative numbers by converting them to positive
    if (temp < 0) {
        temp = -temp;
    }

    // Loop to isolate and remove digits one by one
    do {
        count++;        // Increment the digit counter
        temp /= 10;     // Remove the last digit
    } while (temp != 0);

    printf("Total number of digits in %lld is: %d\n", num, count);

    return 0;
}
