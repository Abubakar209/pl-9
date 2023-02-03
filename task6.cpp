#include<iostream>
using namespace std;

 main()
{
    string name;
    int idx=0;
    int count=0;
    cout<<"ENter Name ";
  getline (cin,name);
  while (name[idx]!='\0')
  {
    count++;
    cout<<"character "<<name[idx]<<" at index "<<idx<<endl;
    idx++;
    
  }
  
if (count%2==0)
{
 cout<<"Even";
}

else{
  cout<<"odd";
}


}
