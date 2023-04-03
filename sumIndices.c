#include <stdio.h>
void findIndex(int arr[], int N)
{
    for( int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            for( int k = j+1; k < N; k++ )
            {
                if( arr[i] + arr[j] == arr[k])
                {
                    printf("%d %d %d ", i+1, j+1, k+1);
                    return ;
                }
            }
        }
    }
    printf("NO SEQUENCE PRESENT !!!!\n");
}
int main()
{
    int arr[] = { 24, 28, 48, 71, 86, 89, 92, 120, 194, 201};
    int size = 10;
    findIndex(arr, size);
    return 0;
}