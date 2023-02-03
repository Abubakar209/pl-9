#include<iostream>
using namespace std;

 main()
{
  int size;
  cout<<"Enter Size of Array " ;
  cin>>size;
 
int number[size];
int i;
  for ( i = 0; i < size; i++)
  {
   cout<<"enter Number ";
   cin>>number[i];
 

  }
  /*  for ( i = size-1; i >= 0; i--)
  {
 
   cout<<number[i]<<" ";
 

  }*/

  for ( i = 0; i < size; i++)
  {
 
   cout<<number[i]<<" ";
 

  }



}
