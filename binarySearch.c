/*For binary search the numbers must be sorted first*/
#include<stdio.h>
int binSearch(int [],int ,int);
main()
{
	int n,i,A[100],key,flag=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&A[i]);
	}
	printf("Search for :");
	scanf("%d",&key);
	flag=binSearch(A,n,key);
	if(flag==1)
		printf("%d is found",key);
	else
		printf("%d not found",key);
}
int binSearch(int A[],int n,int key)
{
	int i,lb=0,ub=n-1,mid,flag=0;//lb is lower bound, ub is upper bound
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(key==A[mid])
		{
			flag=1;
			break;
		}
		else if(A[mid]<key)
			lb=mid+1;
		else
			ub=mid-1;
	}
	return flag;
}
