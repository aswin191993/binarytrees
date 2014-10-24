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


int size(struct node* head)
{
	struct node* newone=NULL;
	if(head==NULL) return(0);
	int lval=size(head->lnext);
	int rval=size(head->rnext);
	
	return(lval+rval+1);
}
main()
{
	struct node* newhead=NULL;
        newhead=build123();
	int k;
//        play(newhead);
	k=size(newhead);
	printf("number of nodes:%d\n",k);
}


