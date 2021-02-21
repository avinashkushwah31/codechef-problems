#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0;
    for(int i=0;i<n;i++)
    {   int count=0;
    	if(a[i]==1)
    	 {
    	 	
    	 	if(a[i+1]==0)
    	 	 {
    	 	   count++;	
			 }
			 if(a[i+1]==1 && count<6)
			 {
			 	cout<<"NO"<<endl;
			 	flag=1;
			 	count=0;
			 	break;
			 }
		 }
	}
	if(flag==0)
	{
		cout<<"YES"<<endl;
	}
}
