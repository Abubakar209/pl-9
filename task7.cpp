#include<iostream>
using namespace std;

 main()
{
  string name;
  cout<<"Enter NAme";
  cin>>name;
  int idx=0;
  int count=0;
 /* while (name[idx]!='\0')
  {
    idx++;
    count++;
  }*/
  int counter=name.length();
  cout<<counter<<endl;
  for (int i = count-1; i >= 0; i--)
  {
    cout<<" "<<name[i];
  }
  
  
 

 
 


}
