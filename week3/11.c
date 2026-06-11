#include <stdio.h>
int main(){
    int m, n, gcd;
    printf ("ENTER THE FIEST NUMBER AND SECOND NUMBER");
      scanf ("%d  %d" , &m, &n);
      for (int i=1; i<=m && i<=n ; i++){
        if (m%i==0 && n%i==0){
            gcd =i;
        }
      }
      printf ("GCD = %d", gcd);

}