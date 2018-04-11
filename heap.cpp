#include<iostream>
using namespace std;

int l=0;
int heap[100];

void insert(int data){
if(l==0){heap[0]=data;}
else{
heap[l]=data;
int i =l;
int p =(i-1)/2;
while(heap[i]>=heap[p]){
	int t=heap[i];
	heap[i]=heap[p];
	heap[p]=t;
	i=p;
	p=(i-1)/2;
	if(i==p||i==0){break;}
}
}
l++;
}

void delete(){
heap[l]=heap[0];
l--;
int i=0;
while((2*i)+1<=l){
if((2*i)+2>l&&heap[i]<heap[(2*i)+1]){
int t=heap[i];
heap[i]=heap[(2*i)+1];
heap[(2*i)+1]=t;
i=(2*i)+1;}
else{

int main(){
insert(65);
insert(45);
insert(35);
insert(55);
insert(15);
insert(25);
insert(75);
insert(85);
insert(95);
insert(19);
cout<<l;
for(int j=0;j<l;j++){
cout<<heap[j]<<" ";} 
return 0;
}
