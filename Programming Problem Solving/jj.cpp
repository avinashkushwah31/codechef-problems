#include<iostream>
using namespace std;

int foo1(unsigned int a)
{
	int b=a;
	return b/2;
}

int main()
{
	float x;
	x=10;
	int a=foo1(x);
	cout<<a;
	return 0;
}
