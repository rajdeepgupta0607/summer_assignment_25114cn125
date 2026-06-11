#include <stdio.h>
int main(){
    int m, n, max;
    printf ("ENTER THE FIEST NUMBER AND SECOND NUMBER");
      scanf ("%d  %d" , &m, &n);
      max=(m>n)? m:n;
      while(1){
        if (max%m==0 && max%n==0){
            printf ("LCM %d",max );
            break ;
        }
        max++;
      }
}