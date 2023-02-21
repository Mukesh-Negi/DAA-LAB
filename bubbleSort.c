#include <stdio.h>
void bSort(int arr[], int size)
{
	int i,j;
	for(i = 0; i <= size-2; i++)
	{
		int flag = 0;
		for( j = 0; j <= size-2-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				flag = 1;
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				
			}
		}
		printf("%d ", i);
		if( flag == 0) break;
		
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
	printf("              PERFORMING BUBBLE SORT :\n");
	bSort(arr, n);
	printArray(arr, n);
	return 0;
}
