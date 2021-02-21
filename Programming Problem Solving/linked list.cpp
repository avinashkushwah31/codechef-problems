#include<stdio>
#include<conio.h>
using namespace std;

struct node
{
	 int data;
	 node *link;
};

int main()
{
	struct node *head=NULL;
	struct node*second=NULL;
	struct node*third=NULL;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	head->data=1;
	second->data=2;
	third->data=3;
	
}




