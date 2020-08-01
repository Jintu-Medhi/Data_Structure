#include<iostream>
using namespace std;

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void maxHeapify(int A[], int P, int n)
{
	/*
		Here, A[] is the array
		n is the number of elements
		P is the index of parent node
		L is the index of left child
		R is the index of right child
		max has the index of maximum of P,L,R
	*/
	
	int L, R, max;
	
	L = 2 * P;
	R = (2 * P) + 1;
	max = P;  // initially max is parent index
	
	if(L < n && A[P] < A[L])
		max = L;
		
	if(R < n && A[max] < A[R])
		max = R;
		
	if(max != P){  //swapping         
		swap(&A[P], &A[max]);
		maxHeapify(A, max, n);
	}
	
}

void heapSort(int A[], int n){
	
	for(int i = n/2; i >= 0; i--){
		maxHeapify(A,i,n);
	}
	
	for(int i = n-1; i >= 0; i--){
		swap(&A[0], &A[i]);
		maxHeapify(A, 0, i-1);
	}
}

main()
{	

	int A[10] = {4,1,3,2,16,9,10,14,8,7}, n = 10;
	
	cout<<"Before sorting \n";
	for(int i = 0; i < n; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
	
	heapSort(A, n);  //calling heap sort
	
	cout<<"After sorting \n";
	for(int i = 0; i < n; i++){
		cout<<A[i]<<" ";
	}
	
}
