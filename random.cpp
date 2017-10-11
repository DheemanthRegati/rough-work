#include<iostream>
using namespace std;
int main(){
	int s,max=0,d;
	cout<<"size";
	cin>>s;
	int a[s];
	cout<<"Enter values";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	for(int j=1;j<s;j++){
		d=(a[j]-a[(j-1)]);
		if(d<0){d*=-1;}
		if(max<d){max=d;}
	}
	cout<<max;
	return 0;
}
