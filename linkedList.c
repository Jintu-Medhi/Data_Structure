#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
//head=NULL;

void insFirst(int );
void insLast(int );
void insAnyPos(int ,int );
void display();
void delFirst();
void delLast();
void delAny(int );
void revLL();
main()
{
	int ch,item,pos;
	while(1)
	{
		printf("1:DISPLAY\n2:INSERT FIRST\n3:INSERT LAST\n4:INSART ANY WHERE\n5:DELETE FIRST\n6:DELETE LAST\n7:DELETE FROM ANY POSITION\n8:Reverse\n0:EXIT\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		printf("_____________________________________\n");
		switch(ch)
		{
			case 1:display();
			       break;
			case 2:printf("Enter the item.\n");
				   scanf("%d",&item);
				   insFirst(item);
				   break;
			case 3:printf("Enter the item.\n");
				   scanf("%d",&item);
				   insLast(item);
				   break;
			case 4:printf("Enter the item.\n");
				   scanf("%d",&item);
				   printf("Enter the position.\n");
				   scanf("%d",&pos);
				   insAnyPos(item,pos);
				   break;
			case 5:delFirst();
				   break;
			case 6:delLast();
				   break;
			case 7:printf("Enter the position.\n");
				   scanf("%d",&pos);
				   delAny(pos);
				   break;
			case 8:revLL();
				   break;
			case 0: exit(0);
			default:printf("Wrong choice\n");
		}
	}
}
//function to insert at first.
void insFirst(int item)
{
	struct node *nw;
	nw=(struct node *)malloc(sizeof(struct node));
	if(nw==NULL)
	{
		printf("Insufficient space.");
		exit(0);
	}
	if(head==NULL)
	{
		head=nw;
		nw->data=item;
		nw->next=NULL;
	}
	else
	{
		nw->data=item;
		nw->next=head;
		head=nw;
	}
}
//function to insert at last.
void insLast(int item)
{
	struct node *nw,*p;
	//p=head;
	nw=(struct node *)malloc(sizeof(struct node));
	if(nw==NULL)
	{
		printf("Insufficient space.");
		exit(0);
	}
	nw->data=item;
	nw->next=NULL;
	if(head==NULL)
	{
		head=nw;
	}
	else
		{
			p=head;
			while(p->next!=NULL)
			{
				p=p->next;
			}
			p->next=nw;
		}
}
//function to insert any where.
void insAnyPos(int item,int pos)
{
	struct node *nw,*p;
	int count=1;
	nw=(struct node *)malloc(sizeof(struct node));
	if(nw==NULL)
	{
		printf("Insufficient space.");
		exit(0);
	}
	nw->data=item;
	nw->next=NULL;
	if(head==NULL)
	{
		head=nw;
	}
	else
	{
		p=head;
		while((pos-1)!=count)
		{
			p=p->next;
			count++;
		}
		nw->next=p->next;
		p->next=nw;	
	}
}
//Delete first
void delFirst()
{
	struct node *p;
	p=head;
	if(head==NULL)
	{
		printf("No item.\n");
	}
	else
	{
		head=p->next;
		free(p);
	}
}
//Delete last
void delLast()
{
	struct node *p,*q;
	p=head;
	if(head==NULL)
	{
		printf("No item.");
	}
	else
	{
		//p=head;
		while(p->next!=NULL)
		{
			q=p; 
			p=p->next;
		}
		q->next=NULL;
		free(p);
	}
}
//Delete any position
void delAny(int pos)
{
	struct node *p,*q;
	int count=1;
	p=head;
	if(head==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
	  	while(pos!=count)
		{
			q=p;
			p=p->next;
			count++;
		}
		q->next=p->next;
		free(p);
	}
}
//display function
void display()
{
	struct node *p;//*q;
	if(head==NULL)
	{
		printf("Nothing to display.\n");
	}
	else
	{
		p=head;
		while(p->next!=NULL)
		{ 
			//q=p;
			printf("data=%d\n",p->data);
			p=p->next;
		}
		printf("data=%d\n\n",p->data);// to print the last item
	}
}
//To reverse the linked list
void revLL()
{
	struct node *p,*q,*r;
	p=head;
	q=p->next;
	r=NULL;
	while(p->next != NULL)
	{
		p->next=r;
		r=p;
		p=q;
		q=p->next;
	}
	p->next=r;
	head=p;
}
