#include<iostream>
using namespace std;
 int main(){

    int n;
    cout<<"enter the number for which binary to be converted";
    cin>>n;

    int ans=0;
    int power=1;

    while(n>0){
        int digit=n%2;
        ans+=digit*power;
        n/=2;
    }
    cout<<ans;
    return 0;
 }