#include<iostream>
using namespace std;

int main(){

    int n,num;
    cout<<"Enter The Number To check Palindrome";
    cin>>n;

    num=n;

    int lastdigit=0,reverse=0;
    while(n>0){
    lastdigit=n%10;
    reverse=reverse*10+lastdigit;
    n=n/10;
    }

    if( num==reverse)
        cout<<"palindrome number";
    
    else 
        cout<<"not a palindrome number";
    
    return 0;

}