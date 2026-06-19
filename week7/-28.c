#include<stdio.h>
int rev=0;
int reversenumber(int n){
    if(n==0){
      return reverse;
      int d;
    int lastdigit;
    lastdigit=n%10;
    reverse =reverse*10+lastdigit;
    n=n/10;
    return reversenumber;
    }
}
int main(){
    int num;
    printf("ENTER A NUMBER");
    scanf("%d", &num);
    reverse=0;
    printf("%d", reversenumber(num));
    return 0;
}