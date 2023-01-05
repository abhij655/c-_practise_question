#include<iostream>
using namespace std;

int main(){

       int number;
       cout<<"enter the number";
    cin>>number;

    int ans=0;
    int power=1;

    while(number>0){
        int lastdigit=number%8;
        ans+=lastdigit*power;
        power*=10;
        number/=8;
    }
    cout<<ans;
    return 0;
 }
