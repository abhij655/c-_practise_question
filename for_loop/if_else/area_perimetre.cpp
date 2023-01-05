#include<iostream>
using namespace std;

int main(){
    float length;
    cout<<"enter length";
    cin>>length;

    float breadth;
    cout<<"enter breadth";
    cin>>breadth;

    float area;
    float perimetre;

    area=length*breadth;
        cout<<"area";
        cout<<area<<endl;
    
    perimetre=2*(length+breadth);
       cout<<"perimetre";
       cout<<perimetre<<endl;

       if(area>perimetre){
        cout<<"area greater";
       }
       else{
        cout<<"area lesser";
       }

    return 0;


}