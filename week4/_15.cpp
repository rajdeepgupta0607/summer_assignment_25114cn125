#include <iostream>
using namespace std;
int main(){
    int n, sum=0 , c;
    cout << "enter a number";
    cin>>n;
    c=n;
    while(n>0){
        int lastdigit=n%10;
        sum=sum+ (lastdigit*lastdigit*lastdigit);
        
        n=n/10;
    }
    if(sum==c){
        cout<<" no isarmstong";
        
    }
    else{
        cout<<" is not armstrong";
        
    }

    
}