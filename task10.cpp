#include<iostream>
using namespace std;

main(){
int size;
cout<<"Enter Number you want to calculate ";
cin>>size;
float num[size];
float sum=0;
for (int i = 0; i < size; i++)
{
    
    cout<<"Enter A number ";
    cin>>num[i];
     sum=sum+num[i];
   
}
 for (int i = 0; i < size; i++)
  {
 
   cout<<num[i]<<",";
 

  }

cout<<"the sum is "<<sum;










}