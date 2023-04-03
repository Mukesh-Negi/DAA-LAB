#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partiton( int arr[], int l, int h, int *comp, int *swaps)
{
    int pivot = arr[h];
    int i = l-1;
    int j;
    for( j = l ; j <= h-1; j++)
    {
        (*comp)++;
        if( arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
            (*swaps)++;
        }
    }
    swap(&arr[i+1], &arr[h]);
    (*swaps)++;
    return i+1;
}
void qSort( int arr[], int l, int h, int *comp, int *swaps)
{
    if( l < h)
    {
        int pi = partiton(arr, l,h, comp, swaps);
        qSort(arr, l, pi-1, comp, swaps);
        qSort(arr, pi+1, h, comp, swaps);
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
    int arr[] = {54, 65, 34, 76, 78, 97, 46, 32, 51, 21};
    int N = 10;
    int comp = 0;
    int swaps = 0;
    qSort(arr, 0, N-1, &comp, &swaps);
    printf("COMPARISONS REQUIRED : %d\n", comp);
    printf("SWAPS REQUIRED : %d\n", swaps);
    printArray(arr, N);
    return 0;
}