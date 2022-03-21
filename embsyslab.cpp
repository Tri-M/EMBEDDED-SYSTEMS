#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"\nEnter 2 numbers to do operations on";
	cin>>a>>b;
	cout<<"\nAND Operation";
	cout<<a&b;
	cout<<"\nOR operation";
	cout<<a|b;
	cout<<"\nXOR operation";
	cout<<a^b;
	cout<<"SHIFT operations ";
	cout<<"-----------------";
	int num;
	cout<<"\nEnter a number to perform shift operations on ";
	cin>>num;
	cout<<"To perform shift operation by how many bits :";
	int i;
	cin>>i;
	cout<<"\nRight shift operation ";
	int res1;
	res1=num>>i;
	cout<<res1;
	cout<<"\nLeft shift operation ";
	int res2;
	res2=num<<i;
	cout<<res2;
}

