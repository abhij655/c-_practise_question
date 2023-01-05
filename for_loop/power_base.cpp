#include<iostream>
using namespace std;

int main(){

    int base;
    cout<<"base";
    cin>>base;

    int power;
    cout<<"power";
    cin>>power;
    int result=1;

    for(int i=power;i>0;i--){
        result=result*base;
    }
    cout<<result;
    return 0;

}