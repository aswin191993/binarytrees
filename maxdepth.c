#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node* rnext;
        struct node* lnext;
};

struct node* newone(int val)
{
        struct node* root=NULL;
        root=malloc(sizeof(struct node));
        root->data=val;
        root->rnext=NULL;
        root->lnext=NULL;
        return(root);
}

struct node* build123()
{
        struct node* head=NULL;
        head=malloc(sizeof(struct node));
        head->data=2;
        head->rnext=newone(3);
        head->lnext=newone(1);
        return(head);
}
int maxdepth(struct node* head)
{
	if(head==NULL) return(0);
	int rval=maxdepth(head->rnext);
	int lval=maxdepth(head->lnext);
	if(rval>=lval)
	{
		return(rval+1);
	}
	else
	{
		return(lval+1);
	}
}

main()
{
	struct node* head=NULL;
	head=build123();
	int k=maxdepth(head);
	printf("maximum depth:%d\n",k);
}
