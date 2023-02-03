#include<iostream>
using namespace std;

main(){

int first;
    cout<<"Enter First Number ";
cin>>first;
int last;
    cout<<"Enter last Number ";
cin>>last;
int size;

cout<<"Enter first Array ";
cin>>size;
float num[size];

for (int i = 0; i < size; i++)
{
    
    cout<<"Enter A number ";
    cin>>num[i];
    
   
}
cout<<first<<",";
 for (int i = 0; i < size; i++)
  {
 
   cout<<num[i]<<",";
 

  }

cout<<last;










}