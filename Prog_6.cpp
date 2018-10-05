//Write a C++ program to find sum of digits of a given number using recursion.

#include<iostream>
using namespace std;
//Recursive Func
int sum(int t,int s,int c)
{
	if(c==0){

	}
	else{
	int r=t%10;
	t=t/10;
	c--;
	s=r+sum(t,s,c);
	}
	return s;
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
	cout<<sum(n,0,c);
}

