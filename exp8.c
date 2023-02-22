#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node* createll(struct node* start)
{
	struct node* newnode;
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=-1)
	{
		newnode=(struct node*)malloc(sizeof(struct node*));
		newnode->data=num;
		if(start==NULL)
		{
			newnode->next=NULL;
			start=newnode;
		}
		else
		{
			newnode->next=start;
			start=newnode;
		}
		scanf("%d",&num);
	}
	return start;
}
struct node* display(struct node* start)
{
	struct node* ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("\t%d",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
	return start;
}
void main()
{
	struct node* start=NULL;
	struct node* createll(struct node *);
	struct node* display(struct node *);
	start=createll(start);
	printf("Linked list created\n");
	start=display(start);
}
