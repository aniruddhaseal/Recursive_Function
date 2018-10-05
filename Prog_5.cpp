//Write a C++ program to find reverse of any number using recursion.

#include<iostream>
#include<cmath>
using namespace std;
//Recursive Func
int rev(int t,int re,int c)
{
	if(c==0){

	}
	else{
	int r=t%10;
	t=t/10;
	c--;
	re=r*pow(10,c)+rev(t,re,c);
	}
	return re;
}
int main(){
	int n;
	//Taking Input
	cout<<"Enter a number";
	cin>>n;
	int k=n;
	int c=0;
	while(k>0){
		k=k/10;
		c++;
	}
	//Output
	cout<<rev(n,0,c);
}

