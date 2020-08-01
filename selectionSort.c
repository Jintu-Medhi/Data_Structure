#include<stdio.h>
void selectSort(int [],int );
int minLoc(int [],int ,int );
void swap(int *,int *);
main()
{
	int n,A[100],i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the numbers.\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
		
	selectSort(A,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}	
}
void selectSort(int A[],int n)
{
	int i,loc;
	for(i=0;i<n;i++)
	  {
	  	loc=minLoc(A,i,n);
	  	swap(&A[loc],&A[i]);
	  }
}
int minLoc(int A[],int lb,int n)
{
	int i,min=A[lb],loc=lb;
	for(i=lb;i<n;i++)
	{
		if(min>A[i])
		{
			min=A[i];
			loc=i;
		}
	}
	return loc;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
