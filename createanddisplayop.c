#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void create()
{
	int item;
	char ch;
	
	//create a node
	struct node *newnode,*temp;
	do
	{
		newnode=(struct node *) malloc(sizeof(struct node));
			//insert data
	printf("enter the data\n");
	scanf("%d",&item);
	newnode->data=item;
	///store null in newnode
	newnode->next=NULL;
	if(head==NULL)
	
		head=newnode;
		else
		{
			//go to last node
			temp=head;
			while(temp->next!=NULL)
			temp=temp->next;
			//insert the node at last
			temp->next=newnode;			
		}
		printf("you want to create 1 more node?[y/n]");
		scanf(" %c",&ch);	
	}
	

		while(ch=='y');
	
}
void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		//print current node data
		printf("%d->",temp->data);
		//go to next node
		temp=temp->next;
	}
}
void main()
{
	create();
	display();
	
}


