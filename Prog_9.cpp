//Fibonacci Series
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a value for n";
	cin>>n;
	int a=0,b=1;
	cout<<a<<endl;
	cout<<b<<endl;
	fibbo(0,1,(n-2));
	
}
void fibbo(int a,int b,int n)
{
	if(n==0){
	
	}
	else{
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
		n--;
		fibbo(a,b,n);
	}
}
	
	
