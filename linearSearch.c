#include <stdio.h>
int lSearch( int arr[], int size, int key)
{
	int i = 0;
	for( i = 0; i < size; i++)
	{
		if( arr[i] == key) return i;
	}
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
	int res = lSearch(arr,n,key);
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
