#include <stdio.h>
#include <math.h>
void findIndex(int arr[], int N, int key)
{
    int count = 0;
    for( int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
           if(abs(arr[i] - arr[j] == key)) count++;
        }
    }
    printf("TOTAL PAIRS : %d", count);
}
int main()
{
    int arr[] = {24, 71, 16, 92, 12, 28, 48, 14, 20, 22};
    int size = 10;
    findIndex(arr, size, 4);
    return 0;
}