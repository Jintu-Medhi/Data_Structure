#include<stdio.h>
void bublSort(int [],int );
void swap(int *, int *);
main()
{
	int n,A[100],i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the numbers.\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
		
	bublSort(A,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}	
}
void bublSort(int A[],int n)
{
	int i,j,flag=0;
	for(i=0;i<n-1 && flag=0;i++)//number of pass n-1
	{
		flag=1;
		for(j=0;j<n-1-i;j++)//number of comparisons n-1-i
		{
			if(A[j]>A[j+1])
			swap(&A[j],&A[j+1]);
			flag=0;
		}
	}
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
