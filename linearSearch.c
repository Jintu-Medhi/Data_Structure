#include<stdio.h>
int linSearch(int [],int ,int);
main()
{
	int n,A[100],i,key,flag=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("Search: ");
	scanf("%d",&key);
	flag=linSearch(A,key,n);
	if(flag==1)
		printf("%d is found",key);
	else
		printf("%d not found",key);
}
int linSearch(int A[],int key,int n)
{
	int flag=0,i;
	for(i=0;i<n;i++)
		{
			if(key==A[i])
			{
				flag=1;
				break;
			}
		}
	return flag;
}
