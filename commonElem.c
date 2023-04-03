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
void common(int arr1[], int arr2[], int m, int n)
{
    int i = 0; int j = 0;
    while( i < m && j < n)
    {
        if( arr1[i] == arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
        else if( arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

}
int main()
{

    int arr1[] = {34, 76, 10, 39, 85, 10, 55};
    int arr2[] = {30, 55, 34, 72, 10, 34, 10, 89, 11, 30, 69, 51};
    int s1 = 7;
    int s2 = 12;
    insSort(arr1, s1);
    insSort(arr2, s2);
    common(arr1, arr2, s1, s2);
    return 0;
}