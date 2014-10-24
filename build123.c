#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node* nleft;
	struct node* nright;
};

struct node* newnode(int data)
{
	struct node* nodea=malloc(sizeof(struct node));
	nodea=malloc(sizeof(struct node));
	nodea->data=data;
	nodea->nleft=NULL;
	nodea->nright=NULL;
	return(nodea);
}

struct node* build123()
{
	struct node *head=newnode(2);
	struct node *lnode=newnode(1);
	struct node *rnode=newnode(3);
	head->nleft=lnode;
	head->nright=rnode;
	return(head);
}
void play(struct node* head)
{
        struct node* r=NULL;
        struct node* l=NULL;
        printf("root:%d\n",head->data);
        r=head->nright;
        printf("right:%d\n",r->data);
        l=head->nleft;
        printf("left:%d\n",l->data);
}


main()
{
	struct node* head=NULL;
	head=build123();
	play(head);

}
