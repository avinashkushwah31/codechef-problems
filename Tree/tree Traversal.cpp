#include<stdio.h>
#include<malloc.h>
using namespace std;
struct node
{
	struct node *left;
	struct node * right;
	int data;
};

struct node* newNode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
 void inOrder(struct node * node)
 {
 	if(node==NULL)
 	{
 		return;
	}
	else
	{
		inOrder(node->left);
		printf("%d",node->data);
		inOrder(node->right);
	}
 }
 
 int main()
 {
 	struct node* root=newNode(1);
 	root->left=newNode(2);
 	root->right=newNode(4);
 	root->left->left=newNode(6);
 	inOrder(root);
 	getchar();
 	return 0;
 }
