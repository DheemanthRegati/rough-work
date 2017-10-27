#include<iostream>
using namespace std;
int main()
{
int *p,a=2,b=3;

p=&a;
cout<<a<<b<<*p;
b=*p;
cout<<a<<b<<*p;
return 0;
}
