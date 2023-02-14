// binary search using recursion
#include <stdio.h>
int bsRcn(int arr[], int s , int e,  int key)
{
	if(s > e) return -1;
	int mid = s+(e-s)/2;
	if( arr[mid] == key) return mid;
	if( key > arr[mid]) return bsRcn(arr, mid+1, e, key);
	else return bsRcn(arr, s, mid-1, key);
}
int main()
{
	int n; 
	printf("ENTER NUMBER OF ELEMENTS :->");
	scanf("%d", &n);
	int arr[n];
	printf("ENTER ELEMENTS OF ARRAY :->");
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("ENTER ELEMENT YOU WANT TO SEARCH :->");
	int key;
	scanf("%d", &key);
	int res = bsRcn(arr, 0, n-1, key);
	if( res == -1)
	{
		printf("ELEMENT IS NOT PRESENT \n");
	}
	else
	{
		printf("ELEMENT IS PRESENT AT INDEX %d \n",res);
	}
	return 0;
}
