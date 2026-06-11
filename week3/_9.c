#include<stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("ENTER A NUMBER");
    scanf ("%d", &n);
    bool isprime=true;
    for (int i=2; i<=n-1; i++){
        if(n%i==0){
            isprime =false;
            break;
        }
    }
        if(isprime==true){
            printf ("PRIME NO");
        }
        else{
            printf ("NOT PRIME NO");
        }
    
    return 0;
}