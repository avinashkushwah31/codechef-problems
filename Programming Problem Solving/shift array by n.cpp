#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int shift;
	cin>>shift;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	int b[shift];
	for(int i=0;i<shift;i++)
	{
		b[i]=a[i];
	}
	int k=0;
	for(int i=0;i<n;i++)
	{
	   if(i<=n-2)
	   {
	   	a[i]=a[i+2];
	   }
	   else
	   {
	   	a[i]=b[k++];
	   }
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
