#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 5)
        {
            printf("*\t");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}