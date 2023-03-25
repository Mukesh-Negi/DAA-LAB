#include <stdio.h>
int getMax(int arr[], int n)
{
    int max = arr[0];
    for( int i = 1; i < n; i++)
    {
        if( arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void countSort( int arr[], int n)
{
    int output[n+1];
    int max = getMax(arr, n);
    int count[max+1];
    for(int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for( int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for( int i = 1; i <= max; i++)
    {
        count[i] += count[i-1];
    }
    for( int i = n-1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for( int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }

}
void print(int arr[] , int n)
{
    for( int i = 0; i < n; i++)
    {
        printf("%d ", arr[i] );
    }
    printf("\n");
}
int main()
{
    int arr[] = { 5, 5, 4, 4, 3, 3, 2, 2, 1 ,1};
    int size = 10;
    print(arr, size);
    countSort(arr, size);
    print(arr, size);
    return 0;
}