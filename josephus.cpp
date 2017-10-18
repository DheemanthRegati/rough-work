#include<iostream>
using namespace std;
int kill(int p){
int a[p];
for(int i=0;i<p;i++){
	a[i]=1;
	}
int i=0,j=0,m=p;
	while(i<p){
		while(a[i]==0){
			i++;
			if(i>=p){i=0;}
			}
		j=i+1;
		if(j>=p){j=0;}
		while(a[j]==0){
			j++;
			if(j>=p){j=0;}
			}
		a[j]=0;
		m--;
		if(m==1){return (i+1);}	
		i+=2;
		if(i>=p){i=0;}
		}
}
int main(){
int n,y;
cout<<"Enter total number  of people in ring \n";
cin>>n;
if(n>1)
{y=kill(n);}
else if (n=1){y=1;}
cout<<"\n The surviving person is "<<y<<endl;

return 0;
}

