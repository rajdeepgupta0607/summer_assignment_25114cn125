#include <stdio.h>
isprime (int n){
    for (int i=2; i<=n-1;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main (){
    int n1, n2;
    printf ("ENTER THE FIEST NUMBER");
    scanf ("%d", &n1);
      printf ("ENTER THE second NUMBER");
    scanf ("%d", &n2);
    printf ("THE PRIME NUMBERS %d and %d are", n1,   n2);
    for (int i=n1; i<n2;i++){
        if(isprime(i)){
            printf ("%d", i);
        }
    }
    return 0;
}