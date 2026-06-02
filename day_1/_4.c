#include <stdio.h>

int main() {
    int num;

    // Ask user for the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("\nMultiplication Table for %d:\n", num);
    
    // Loop to print the table from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
