#include<iostream>
using namespace std;

main(){
string name;
cout<<"Enter NAme ";
cin>>name;
/*char second;
cout<<"Enter Char you want to compare ";
cin>>second;*/
int counter=name.length();
int count=0;
for (int i = 0; i < counter; i++)
{
        if (name[i]=='a' || name[i]=='e' ||  name[i]=='i' || name[i]=='o' || name[i]=='u')
{
   count++; 
}


}

if (count>0)
{
    cout<<"vowel "<<count<<endl;
}

else{
    cout<<"not found";
}


}