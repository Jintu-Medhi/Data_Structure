#include<stdio.h>
void inserSort(int [],int );
main()
{
	int n,A[100],i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the numbers.\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
		
	inserSort(A,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}	
}
void inserSort(int A[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		for(j=i-1;j>=0;j--)
		{
			if(A[j]>temp)
				A[j+1]=A[j];
			else
				break;
		}
		A[j+1]=temp;
	}
}
