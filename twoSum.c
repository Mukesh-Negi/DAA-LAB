#include <stdio.h>
void insSort( int *arr, int size)
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
void twoSum ( int arr[], int n, int key)
{
    int i = 0;
    int j = n-1;
    while( i < j)
    {
        if( arr[i] + arr[j] == key)
        {
            printf(" %d %d ", arr[i] , arr[j]);
            return ;
        }
        else if( arr[i] + arr[j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    printf("No such Element Exists \n");
}
int main()
{
    int arr[] = { 56, 10, 72, 91, 29, 3, 41, 45, 61, 20, 11, 39, 9, 12, 94};
    int size = 15;
    insSort(arr, size);
    twoSum(arr, size, 302);
    return 0;
}