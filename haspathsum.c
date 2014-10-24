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
	struct node* leftnode2=NULL;
        struct node* rightnode2=NULL;
        head=newone(2);
        leftnode=newone(1);
        rightnode=newone(3);
	leftnode2=newone(4);
        rightnode2=newone(5);
	head->left=leftnode;
	head->right=rightnode;
	leftnode->left=leftnode2;
	leftnode->right=rightnode2;
        return(head);
}

int haspathsum(struct node* head,int sum)
{
	struct node* temp;
	temp=head;
	if(temp==NULL)return(sum);
 	printf("%d\n",temp->data);
	haspathsum(temp->left,sum=((temp->data)+sum));
}

main()
{
	struct node* head=NULL;
	head=build123();
	int val=haspathsum(head,0);
	printf("sum of order:%d\n",val);
}
