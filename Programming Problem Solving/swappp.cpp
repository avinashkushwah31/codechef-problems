#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}

int main()
{
	 int a=5,b=6;
	 swap(a,b);
	 cout<<a<<" "<<b;
	 return 0;
}
