#include<stdio.h>
#include<stdlib.h>
#define MAX 4
void push(int);
int pop();
void display();
int A[MAX];
int top=-1;
main()
{
	int ch,item;
	while(1)
	{
		printf("\n1:PUSH\n2:POP\n3:Display\n0:Exit");
		printf("\nEnter your choice ");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:printf("Enter a element ");
				   scanf("%d",&item);
				   push(item);
				   break;
			case 2:printf("Delete item %d",pop());
				   break;
			case 3:printf("\nSTACK\n");
			       display();
			       break;
		    case 0:exit(0);
		    default:printf("Wrong choice");
		}
	}
}

void push(int item)
{
	if(top==MAX-1)
	{
		printf("Qverflow");
	}
	else
	{
		//printf("top=%d\n",top);
		A[++top]=item;
		//printf("top=%d",top);
	}
}

int pop()
{
	int x;
	if(top==-1)
	{
		printf("\nStack is empty");
		return -9999;
	}
	else
	{
		//printf("top=%d\n",top);
		x=A[top--];
		//printf("top=%d",top);
	}
	return x;
}

void display()
{
	int i;
	if(top<0)
	{
		printf("Empty!!!");	
	}
	else
    {
        for(i=0;i<=top;i++)
        {
            	printf("%d ",A[i]);
        }
	}
}
