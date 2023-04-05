#include <bits/stdc++.h>
using namespace std;
int partiton( int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while( i < j)
    {
        while( i <= high-1 && arr[i] <= pivot) i++;
        while( j >= low+1 && arr[j] > pivot) j--;
        if( i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void qSort( int arr[], int low, int high)
{
    if( low < high)
    {
        int pIdx = partiton(arr, low, high);
        qSort(arr, low, pIdx-1);
        qSort(arr, pIdx+1, high);
    }
}
void printArray(int arr[], int N)
{
    for( int i = 0; i < N ; i++)
    {
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {54, 65, 34, 76, 78, 97, 46, 32, 51, 21};
    int N = 10;
    qSort(arr, 0, N-1);
    printArray(arr, N);
    return 0;
}