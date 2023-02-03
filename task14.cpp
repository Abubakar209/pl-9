#include<iostream>
using namespace std;

main(){
int size;

cout<<"Enter Array Size ";
cin>>size;
float num[size];
float sum=0;
for (int i = 0; i < size; i++)
{
    
    cout<<"Enter  number ";
    cin>>num[i];
  
     
   
}
  
        num[0]=0.25*num[0];
        num[1]=0.10*num[1];
        num[2]=0.05*num[2];
        num[3]=0.01*num[3]; 
      sum=num[0]+num[1]+num[2]+num[3];
      
if (sum>=num[4])
{
    cout<<"true";
}
else{
    cout<<"false";
}



}