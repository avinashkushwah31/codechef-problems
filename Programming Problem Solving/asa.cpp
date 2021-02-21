#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char *c[]={"knowledge","is","power"};
	char **p;
	p=c;
	cout<<++*p;
	cout<<*p++;
    cout<<++*p;
/*	printf("%s",++*p);
	printf("%s",*p++);
	printf("%s",++*p);*/
	return 0;
}
