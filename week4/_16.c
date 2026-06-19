#include <stdio.h>
#include <math.h>

int main() {
    int a,b, num, temp, digit, sum, digits;

    printf("Enter the starting number: ");
    scanf("%d", &a);

    printf("Enter the ending number: ");
    scanf("%d", &b);

    printf("Armstrong numbers between %d and %d are:\n",a,b);

    for (num = a; num <= b; num++) {
        temp = num;
        digits = 0;

        // Count digits
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        // Calculate sum of digits raised to power of number of digits
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num)
            printf("%d ", num);
    }

    return 0;
}