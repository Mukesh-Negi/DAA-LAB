#include <stdio.h>
int first ( int arr[], int N, int key)
{
    int s = 0 , e = N-1;
    int idx = -1;
    while( s <= e)
    {
        int mid = s+(e-s)/2;
        if( arr[mid] == key)
        {
            idx = mid;
            e = mid-1;
        }
        else if( key > arr[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return idx;
}
int last ( int arr[], int N, int key)
{
    int s = 0 , e = N-1;
    int idx = -1;
    while( s <= e)
    {
        int mid = s+(e-s)/2;
        if( arr[mid] == key)
        {
            idx = mid;
            s = mid+1;
        }
        else if( key > arr[mid])
        {
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return idx;
}
int main()
{
    int arr[] = { 1, 2, 2, 3, 3, 5, 5, 5, 25, 75, 75, 75, 97, 97, 97};
    int size = 15;
    int key = 750;
    int  left = first(arr, size, key);
    int right = last (arr, size, key);
    if( left == -1 || right == -1)
    {
        printf("ELEMENT IS NOT PRESENT !!!\n");
    }
    else
    {
        printf("NO. OF OCCURENCES of %d  : %d\n",key,  right - left +1);
    }
    return 0;
}