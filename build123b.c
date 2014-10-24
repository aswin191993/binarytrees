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
void play(struct node* head)
{
	if(head==NULL && head->rnext && head->lnext) return;
	struct node* r=NULL;
	struct node* l=NULL;
	printf("root:%d\n",head->data);
	r=head->rnext;
	printf("right:%d\n",r->data);
	l=head->lnext;
	printf("left:%d\n",l->data);
}
main()
{
	struct node* newhead=NULL;
	newhead=build123();
	play(newhead);

}
