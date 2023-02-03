#include<iostream>
using namespace std;

int main()
{
   
int size;
cout<<"ENter Size ";
cin>>size;
int num[size];
int count=0;
int second=0;
cout<<"Enter number You Want to check";
cin>>second;
for (int i = 0; i < size; i++)
{
    cout<<"Enter A number ";
    cin>>num[i];

    if (num[i]==second)
{
    count++;
}



}


if (count>0)
{
    cout<<"already  exist in "<<count<<" times ";
}

else{
    cout<<"not Exist";
}



}
