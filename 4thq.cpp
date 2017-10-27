#include<iostream>
#include<string>
using namespace std;
int main()
{
char name[]="Dheemanth",*c;

for(int i=0;i<9;i++)
{cout<<name[i];}
c=name;
for(int i=0;i<9;i++)
{cout<<*(c+i);}
return 0;
}
