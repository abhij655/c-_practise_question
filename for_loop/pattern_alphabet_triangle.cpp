#include<iostream>
using namespace std;

    int main(){
  int i,j,n,k,alpha=65;

  cout<<"enter the number of rows of pattern ";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<(char)(alpha++);
    }
    alpha=alpha-2;
    for(int k=(i-1);k>=1;k--){
        cout<<(char)(alpha--);
    }
     cout<<endl;
     alpha=65;
   }
   return 0;
}

