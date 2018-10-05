//Write a C++ program to find factorial of any number using recursion.

#include<iostream>
using namespace std;
int fact(int i,int f)
{
	if(i==0){

	}
	else{
		f=(i)*fact((i-1),f);
		i--;
	}
	return f;
}
int main()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	int f=fact(n,1);
	cout<<f;
	return 0;
}
