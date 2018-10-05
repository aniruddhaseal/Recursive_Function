//Write a C++ program to print all natural numbers between 1 to n using recursion.


#include<iostream>
using namespace std;
//Recurcive Function
int print(int k)
{
	if(k==0){
		
	}
	else{
		cout<<k;
		k--;
		int t=print(k);
	}
	return 0;
}
int main()
{
	int n;
	//Taking Input
	cout<<"Enter the value of n";
	cin>>n;
	//Output
	int k=print(n);
	return 0;
}

