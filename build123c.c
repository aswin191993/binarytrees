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
        //head=malloc(sizeof(struct node));
        head=newone(2);
        leftnode=newone(3);
        rightnode=newone(1);
	head->left=leftnode;
	head->right=rightnode;
        return(head);
}

void play(struct node* head)
{
        if(head==NULL) return;
        struct node* r=NULL;
        struct node* l=NULL;
        printf("root:%d\n",head->data);
        r=head->right;
        printf("right:%d\n",r->data);
        l=head->left;
        printf("left:%d\n",l->data);
}
main()
{
	struct node* head=NULL;
	head=build123();
	play(head);
}
