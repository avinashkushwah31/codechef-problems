#include<iostream>
using namespace std;
int main()
{
	int best=0, sum=0;
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
		
	}
	for(int a=0;a<n;a++)
	{
	      sum=max(array[a],sum+array[a]);
		  best=max(sum,best);
		  	
	}
	cout<<"Maximum Subarray Sum is ="<<best;
	return 0;
}
