#include<iostream>
using namespace std;
#define max 10
int a[max];
int top=-1;
void push(int x)
{
	if(top==max-1)
	{
		cout<<"Stack overflow";
		return ;
		
	}
	else
	{
		top=top+1;
		a[top]=x;
		return ;
	
   }	
}

int pop()
{
	if(top==-1)
	{
		cout<<"return underflow";
		return 0;
	}
	else
	{
		int z= a[top];
		top=top-1;
		return z;
		
	}
}

int main()
{
	push(2);
	push (4);
	pop();
	return 0;
}
