#include <stdio.h>

int main(void)
{
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, x = 0;

    for (i = 0; i < 5 - 1; ++i)
    {
        for (j = 0; j < 5 - i - 1; ++j)
        {
            if (aList[j] > aList[j + 1])
            {

                x = aList[j];
                aList[j] = aList[j + 1];
                aList[j + 1] = x;
            }
        }
    }

    for (i = 0; i < 5; ++i)
    {
        printf("%d\t", aList[i]);
    }

    putchar('\n');
    return 0;
}
