#include<stdio.h>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

int max(int a,int b);
int height(struct node* node);
struct node* newNode(int data);

int height(struct node * node)
{
	if(node==NULL)
	{
		return 0;
	}
	else
	{
		return (1+max(height(node->left),height(node->right)));
	}
}
int max(int a,int b)
{
	if(a>b){
		return a;
	}
	else
	{
		return b;
	}
}

struct node* newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
int main()
{   int x;
	struct node* root=newNode(1);
	root->left=newNode(2);
	root->left->left=newNode(3);
	root->right=newNode(4);
	x=height(root);
	printf("height of tree= %d",x);
	getchar();
	return 0;
}



