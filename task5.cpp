#include<iostream>
using namespace std;

int main()
{
   
int size;
cout<<"ENter Size ";
cin>>size;
int num[size];
int count=num[0];


for (int i = 0; i < size; i++)
{
    cout<<"Enter A number ";
    cin>>num[i];
if(num[i]<count){
    count=num[i];
}
}
cout<<count;





}
