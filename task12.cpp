#include<iostream>
using namespace std;

main(){
string name;
cout<<"Enter NAme ";
getline (cin,name);
int counter=name.length();
string count;
for (int i = 0; i < counter; i++)
{
        if (name[i]=='a' || name[i]=='e' ||  name[i]=='i' || name[i]=='o' || name[i]=='u')
{
  name[i]='\0';
  
}


}
for (int i = 0; i <= counter; i++)
{
cout<<name[i];
}



}