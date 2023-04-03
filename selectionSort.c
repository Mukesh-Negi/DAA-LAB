#include <stdio.h>
void selSort(int arr[], int size)
{
	int i , j;
	int comp = 0;
	int swap = 0;
	for( i = 0; i <= size-2; i++)
	{
		int minIdx = i;
		for( j = i+1; j <= size-1; j++)
		{
			comp++;
			if( arr[j] < arr[minIdx])
			{
				minIdx = j;
			}
 		}
 			int temp = arr[i];
			arr[i] = arr[minIdx];
			arr[minIdx] = temp;
			swap++;
	}
	printf("NUMBER OF COMPARISONS : %d\n", comp);
	printf("NUMBER OF SWAPS : %d\n", swap);
}
void printArray(int arr[], int size)
{
	printf("ELEMENTS OF ARRAY ARE:->");
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
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
	printArray(arr, n);
	printf("              PERFORMING SELECTION SORT :\n");
	selSort(arr, n);
	printArray(arr, n);
	return 0;
}
