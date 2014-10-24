#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newone(int val)
{
        struct node* root=NULL;
        root=malloc(sizeof(struct node));
        root->data=val;
        root->right=NULL;
        root->left=NULL;
        return(root);
}

struct node* build123()
{
        struct node* head=NULL;
	struct node* leftnode=NULL;
	struct node* rightnode=NULL;
        head=newone(2);
        leftnode=newone(1);
        rightnode=newone(3);
	head->left=leftnode;
	head->right=rightnode;
        return(head);
}
int minval(struct node* head)
{
        if(head->left==NULL) return(head->data);
	return(minval(head->left));
}
main()
{
	struct node* head=NULL;
	head=build123();
	int k=minval(head);
	printf("minimum value:%d\n",k);
}
