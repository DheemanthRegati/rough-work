#include<iostream>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,6,7,8,9,0},*p;

for(int i=0;i<9;i++){cout<<a[i];}
// p = a;
for(int i=0;i<9;i++)
{
p=&a[i];
cout<<*p;
// cout << *(p+i); }
return 0;
}
