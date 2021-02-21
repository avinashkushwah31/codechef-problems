#include<bits/stdc++.h>
using namespace std;



int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reverse(arr.begin(),arr.begin()+(n-k));
	reverse(arr.begin()+(n-k),arr.begin()+(n));
	reverse(arr.begin(),arr.end());
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
