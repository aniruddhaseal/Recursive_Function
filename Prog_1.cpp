// Write a C++ program to find power of any number using recursion.


#include<iostream>
using namespace std;
//Recursive Func
int power(int x,int n,int a)
{
	if(n==0){
			
			
	}
	else{
		a=x*power(x,n-1,a);
		n--;
	}
	return a;
}
int main(){
	int n,p;
	//Taking Input
	cout<<"Enter the number";
	cin>>n;
	cout<<"Enter the power";
	cin>>p;
	//Output
	int ans=power(n,p,1);
	cout<<ans;
	
}

