//Write a C++ program to find sum of all natural numbers between 1 to n using recursion.


#include<iostream>
using namespace std;
//Recursive Func
int sum(int n,int s)
{
	if(n==0){
	
	}
	else{
	s=n+sum(n-1,s);
	}
	return s;
}
int main()
{
	int n;
	//Taking Input
	cout<<"Enter a number";
	cin>>n;
	int k=sum(n,0);
	//Output
	cout<<k;
	
}

