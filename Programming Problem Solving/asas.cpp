#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int> ar(10);
	for(int i=0; i<ar.size();i++)
	{
		cin>>ar[i];
		
	}
	
	sort(ar.begin(),ar.end());
	for(int i=0;i<ar.size();i++)
	{
		cout<<ar[i]<<" ";
		
		
	}
	
	
	
	return 0;
}
