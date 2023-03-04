#include <stdio.h>
void insSort(int arr[], int size)
{
    int i, j;
    for (i = 0; i <= size - 2; i++)
    {
        int minIdx = i;
        for (j = i + 1; j <= size - 1; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}
void printArray(int arr[], int size)
{
    printf("ELEMENTS OF ARRAY ARE:->");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void findDupl(int arr[], int N)
{
    insSort(arr, N);
    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            printf("DUPLICATES ARE PRESENT\n");
            return;
        }
    }
    printf("DUPLICATES ARE NOT PRESENT");
}
int main()
{
    int n;
    printf("ENTER NUMBER OF ELEMENTS :->");
    scanf("%d", &n);
    int arr[n];
    printf("ENTER ELEMENTS OF ARRAY :->");
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, n);
    findDupl(arr, n);
    return 0;
}