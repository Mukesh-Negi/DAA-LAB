#include <stdio.h>
void merge(int arr[], int l , int m, int r, int *comp)
{
    int i, j, k;
    int n1 = m-l+1;
    int n2 = r-m;
    int L[n1];
    int R[n2];
    for( int i = 0; i < n1; i++)
    {
        L[i] = arr[l+i];
    }
    for( int j = 0; j < n2; j++ )
    {
        R[j] = arr[m+1+j];
    }
    i = 0;
    j = 0;
    k = l;
    while( i < n1 && j < n2)
    {
        if( L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
        (*comp)++;
    }
    while( i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while( j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    };
}
void mergeSort( int arr[], int l, int r, int *comp)
{
    if( l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m, comp);
        mergeSort(arr, m+1, r, comp);
        merge(arr, l, m ,r, comp);
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
    mergeSort(arr, 0, N-1, &comp);
    printArray(arr, N);
    printf("COMPARISONS REQUIRED : %d\n", comp);
    return 0;
}