#include <stdio.h>
int factorial(int n);{
    if (n==1) return 1;
    rerturn n*factorial(n-1);
}
int main(){
    int n;
    printf("enter a number ");

    scanf("%d",&n);
    int fact= fatorial(n);
    printf("%d", fact);
    return 0;
}