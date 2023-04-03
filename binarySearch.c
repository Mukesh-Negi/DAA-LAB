#include <stdio.h>
int binSearch( int arr[], int size, int key)
{
	int count = 0;
	int s = 0;
	int e = size-1;
	while ( s <= e)
	{
		count++;
		int mid = s+(e-s)/2;
		if ( arr[mid] == key)
		{
			printf(" No. of Comparisons :-> %d \n", count);
			return mid;
		} 
		else if( key > arr[mid]) s = mid+1;
		else e = mid-1;
	}
	printf(" No. of Comparisons :-> %d \n", count);
	return -1;
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
	int res = binSearch(arr,n,key);
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
