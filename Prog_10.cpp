//sum  of even numbers in the range

#include<iostream>
using namespace std;
//Recurcive Function
int evs(int u,int l,int s)
{
	if(u<l){
		
	}
	else{
		u--;
		if(u%2==0)
		{
			s=u+evs(u,l,s);
		}
	}
	return s;
}
int main(){
	//Input
	cout<<"Enter Upper Limit";
	cin>>a;
	cout<<"Enter lower limit";
	cin>>b;
	//Output
	int m=evs((a+1),b,0);
	cout<<m;
	
}

