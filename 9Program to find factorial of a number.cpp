#include<iostream>
using namespace std;
main()
{
	int n,fact=1;
	cout<<"Enter the number for factorial : "<<endl;
	cin>>n;
	if(n==0)
	{
	cout<<"The factorial is : 1";
	return n;
	}
	for(int i=n;i>0;i--)
	{
	fact=fact*i;
	}
		cout<<fact;	
}