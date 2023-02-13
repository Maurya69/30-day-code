#include<iostream>
using namespace std;
int fib(long long int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
	
}
int main()
{
	long long int n;
	cout<<"enter n\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<fib(i)<<" ";
	}
	cout<<endl;
	return 0;
}
