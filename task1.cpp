#include<iostream>
using namespace std;

 main()
{
  int size;
  cout<<"Enter Size of Array " ;
  cin>>size;
  int sum=0;
  //int count=0;  
int number[size];

  for (int i = 0; i < size; i++)
  {
   cout<<"enter Number ";
   cin>>number[i];
   sum=sum+number[i];
  }

 
  float average=sum/size;
  
  cout<<"The sum is     "<<sum<<endl;
  cout<<"The average is "<<average;


}
