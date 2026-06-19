#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c=1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series is ");

    for (int i = 1; i <= n; i++) {
        printf("%d ", c);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}