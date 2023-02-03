#include<iostream>
using namespace std;

main(){
string name;
cout<<"Enter NAme ";
getline (cin,name);


int counter=name.length();
//string count;
for (int i = 0; i < counter; i++)
{
  
   
    
  name[i]++;
  



}
for (int i = 0; i <= counter; i++)
{
cout<<name[i];
}



}