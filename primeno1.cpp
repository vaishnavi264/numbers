#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(int i=2;i<n-1;i++)
	{
		if(n%i==0)
		{
			cout<<"it is not prime";
			break;
		}
		else
		{
			cout<<"it is prime number";
			break;
		}
	}
}
