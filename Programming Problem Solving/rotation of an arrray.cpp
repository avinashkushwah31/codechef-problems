#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[(i+k)%n]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
    }
}
