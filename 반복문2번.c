#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 5 - i)
        {
            printf(" ");
            j++;
        }
        int k = 1;
        while (k <= i)
        {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}