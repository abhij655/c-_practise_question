#include<iostream>
using namespace std;

int main(){

    int n,lastdigit,sum=0;
    cout<<"enter the number to check happy number";
    cin>>n;

    while(n!=1){
        sum=0;
        while(n>0){
        lastdigit=n%10;
        sum=sum+(lastdigit*lastdigit);
        n=n/10;
    }
      n=sum;
    }
    if(sum==1)
    cout<<"happy number";

    else
    cout<<"not a happy number";
    
    return 0;
   
}