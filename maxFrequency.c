#include <stdio.h>
#include <string.h>
void maxFrequency(char str[])
{
    int map[26];
    for( int i = 0; i < 26; i++)
    {
         map[i] = 0;
    }
    int len = strlen(str);
    for( int i = 0; i < len ; i++)
    {
        int idx = str[i] - 97;
        map[idx]++;
    }
    int count = map[0];
    int idx = 0;
    for( int i = 1; i < 26; i++)
    {
        if (map[i] > count)
        {
            count = map[i];
            idx = i;
        }
    }
    char ch = idx + 97;
    if(count == 1)
    {
        printf("No duplicates are present \n" );
    }
    else
    {
        printf(" %c - %d \n",ch, count);
    }

}
int main()
{
    char arr[] = "gtllwawglcwdsaavcl";
    maxFrequency(arr);
    return 0;
}