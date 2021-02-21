#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &num, int low, int high)
{
	while(high>low)
	{
		swap(num[low],num[high]);
		low++;
		high--;
	}
}

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(arr,0,n-k-1);
	reverse(arr,n-k,n-1);
	reverse(arr,0,n-1);
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
