#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int l , int m, int r)
{
    int mSize = r - l + 1;
    int merged[mSize];
    // array is sorted from l to mid & from mid+1 to r
    int i = l;
    int j = m+1;
    int k = 0;
    while ( i <= m && j <= r)
    {
        if( arr[i] <= arr[j])
        {
            merged[k] = arr[i];
            i++;
        }
        else
        {
            merged[k] = arr[j];
            j++;
        }
        k++;
    }
    while( i <= m)
    {
        merged[k] = arr[i];
        i++;
        k++;
    }
    while( j <= r)
    {
        merged[k] = arr[j];
        j++;
        k++;
    }
    for( int i = 0; i < mSize; i++)
    {
        arr[l+i] = merged[i];
    }
}
void mergeSort( int arr[], int l, int r)
{
    if( l < r)
    {
        int mid = l+(r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);

    }
}
void printArray(int arr[], int N)
{
    for( int i = 0; i < N ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {54, 65, 34, 76, 78, 97, 46, 32, 51, 21};
    int N = 10;
    mergeSort(arr, 0, N-1);
    printArray(arr, N);
    return 0;
}