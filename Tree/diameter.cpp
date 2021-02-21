#include<iostream>
#include<malloc.h>
using namespace std;

int max(int a,int b);
int height(struct node* node);
struct node* newNode(int data);
int diameter(struct node* tree)
{
	if(tree==NULL)
	{
		return 0;
	}
	else
	{
		int lheight=height(tree->left);
		int rheight=height(tree->right);
		
		int ldiameter=diameter(tree->left);
		int rdiameter=diameter(tree->right);
		
		return ( 1+lheight+rheight,max(ldiameter,rdiameter));
		
	}
}
int height(struct node* node)
{
	if(node==null)
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
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
struct node* newNode(int data)
{
	struct node* node=(struct node)malloc(sizeof(struct node));
	node->data=data;
	node->left=null;
	node->right=null;
	return node;
}
int main()
{
	struct node* root=newNode(5);
	root->left=newNode(3)
	root->left->left=newNode(7);
	root->right=newNode(1);
    cout<<diameter(root);
	getchar()
}
