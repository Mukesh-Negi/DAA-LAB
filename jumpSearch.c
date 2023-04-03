#include <stdio.h>
#include <math.h>
int mini( int e1, int e2) // function to find the the minimum of two 
{
    if( e1 < e2) return e1;
    else return e2;
}
void jSearch( int arr[], int size, int key)
{
    int count = 0;
    int step = sqrt(size);
    int prev = 0;
    while( arr[mini(step, size)-1] < key)
    {
        count++;
        prev = step;
        step += sqrt(size);
        if( prev >= size)
        {
            printf("Element NOT found !!\n");
            printf("No. Of Comparisons :-> %d\n", count);
            return ;
        }
    }
    for( int i = prev; i < mini(step,size); i++)
    {
        count++;
        if( arr[i] == key)
        {
            printf("Element Present At Index %d\n", i);
            printf("No. Of Comparisons :-> %d\n", count);
            return;
        }
    }
    printf("Element NOT found !!\n");
    printf("No. Of Comparisons :-> %d", count);
}
int main()
{
    int arr[]= { 1, 3, 2, 0, -1, 5};
    int size = 6;
    jSearch(arr, size, 30);
    return 0;
}