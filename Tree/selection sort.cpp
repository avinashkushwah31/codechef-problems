#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int a[n],loc,min;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
	 for(int j=i+1;j<n;j++)
	 {
	 	if(a[j]<min)
	 	{
	 		min=a[j];
	 		loc=j;
		 }
	 }
	swap(a[i],a[loc]);
    }
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
	}
	return 0;
}
