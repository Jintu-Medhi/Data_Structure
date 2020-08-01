#include<stdio.h>
void quickSort(int [],int ,int );
int partition(int [],int ,int );
void swap(int *,int *);
void display(int [],int );
main()
{
   int n,i,A[10];
   printf("Enter the size\n");
   scanf("%d",&n);
   printf("Enter the numbers\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&A[i]);
   }
   printf("Before sorting\n");
   display(A,n-1);
   quickSort(A,0,n-1);
   printf("\nAfter sorting\n");
   display(A,n-1);
}
void quickSort(int A[],int lb,int ub)
{
    int x;
    if(lb<=ub)
    {
        x=partition(A,lb,ub);
        quickSort(A,lb,x-1);
        quickSort(A,x+1,ub);
    }
}
int partition(int A[],int lb,int ub)
{
   int i,j,pivot;
    i=lb;
    j=ub;
    pivot=A[lb];
   	while(i<j){
		
		while(A[i]<=pivot)
			i++;
		
		while(A[j]>pivot)
			j--;
			
		if(i<j)
			swap(&A[i], &A[j]);
	}
	A[lb] = A[j];
	A[j] = pivot;
	return j;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void display(int A[],int n)
{
  int i;
  for(i=0;i<=n;i++)
  {
      printf("%d ",A[i]);
  }
}
