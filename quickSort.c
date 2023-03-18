#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partiton( int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l-1;
    int j;
    for( j = l ; j <= h-1; j++)
    {
        if( arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return i+1;
}
void qSort( int arr[], int l, int h)
{
    if( l < h)
    {
        int pi = partiton(arr, l,h);
        qSort(arr, l, pi-1);
        qSort(arr, pi+1, h);
    }
}
void printArray(int arr[], int N)
{
    for( int i = 0; i < N ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int N = 5;
    qSort(arr, 0, N-1);
    printArray(arr, N);
    return 0;
}