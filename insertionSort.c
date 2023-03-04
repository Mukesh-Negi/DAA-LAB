#include <stdio.h>
void selSort( int *arr, int size)
{
	int i;
	for( i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i-1;
		while( j >= 0 )
		{
			if( arr[j] > key)
			{
				arr[j+1] = arr[j];
				j--;
			}
			else break;
		}
		arr[j+1] = key;
        }
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
	printf("              PERFORMING INSERTION SORT :\n");
	selSort(arr, n);
	printArray(arr, n);
	return 0;
}
