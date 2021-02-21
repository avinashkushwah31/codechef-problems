#include<stdio.h>
#include<conio.h>
#include<malloc.h>
using namespace std;

struct node{
	  int data;
	  struct node *left;
	  struct node*right;
};

struct node* newNode(int data)
{
	struct node* node= (struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
int main()
{
	struct node* root=newNode(1);
	root->left=newNode(4);
	root->right=newNode(2);
	root->left->left=newNode(6);
	getchar();
	return 0;
	
}
