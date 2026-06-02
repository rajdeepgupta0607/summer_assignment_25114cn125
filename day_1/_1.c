#include <stdio.h>

int main() {
    int n, sum;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Please enter a natural number.\n");
    } else {
        // Apply the formula
        sum = n * (n + 1) / 2;
        printf("The sum of first %d natural numbers is: %d\n", n, sum);
    }
    
    
    return 0;
}
