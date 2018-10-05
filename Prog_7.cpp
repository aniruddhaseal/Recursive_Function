//Write a C++ program to check whether a number is palindrome or not using recursion.

#include<iostream>
#include<cmath>
using namespace std;
int rev(int t,int re,int c)
{
	f(c==0){

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
	cout<<"Enter a number";
	cin>>n;
	int k=n;
	int c=0;
	while(k>0){
		k=k/10;
		c++;
	}
	int r=rev(n,0,c);
	if(r==n)
	{
		cout<<"The number is palindrome";
	}
	else{
		cout<<"The number is not palindrome";
	}
}

