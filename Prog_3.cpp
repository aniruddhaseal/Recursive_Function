//Write a C++ program to print all even numbers in given range using recursion.


#include<iostream>
using namespace std;
//Recurcive Function
int eveod(int u,int l)
{
	if(u<l){
		
	}
	else{
		if(u%2==0)
		{
			cout<<u;
		}
		u--;
		int q=eveod(u,l);
	}
	return 0;
}
int main(){
	//Input
	cout<<"Enter Upper Limit";
	cin>>a;
	cout<<"Enter lower limit";
	cin>>b;
	//Output
	int m=eveod(a,b);
	
}
	
