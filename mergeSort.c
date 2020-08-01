#include<stdio.h>
#include<stdlib.h> 
void mergeSort(int [],int ,int );
void merge(int [],int ,int ,int );
void display(int [],int );
main()
{
   int n,i,A[20];
   printf("Enter the size\n");
   scanf("%d",&n);
   printf("Enter the numbers\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&A[i]);
   }
   printf("Before sorting\n");
   display(A,n-1);
   printf("\n");
   mergeSort(A,0,n-1);
   printf("\nAfter sorting\n");
   display(A,n-1);
    
}
void mergeSort(int A[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        
        mergeSort(A,lb,mid);
        mergeSort(A,mid+1,ub);
        
        merge(A,lb,mid,ub);
    }
}
void merge(int A[],int lb,int mid,int ub)
{
    int i,j,k,B[50];
    i=lb;
    j=mid+1;
    k=lb;
    
    while(i<=mid && j<=ub)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    
    if(i>mid)
    {
        while(j<=ub)
            B[k++]=A[j++];
    }
    
    if(j>ub)
    {
        while(i<=mid)
            B[k++]=A[i++];
    }
    
    
    for(k=lb;k<=ub;k++)
    {
        A[k]=B[k];
    }
}

void display(int A[],int n)
{
  int i;
  for(i=0;i<=n;i++)
  {
      printf("%d ",A[i]);
  }
}
