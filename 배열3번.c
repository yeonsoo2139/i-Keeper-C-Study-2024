#include <stdio.h>

int main(void)
{
    int aList[3][4] = {
        {10, 20, 30},
        {40, 50, 60}};

    int i = 0, j = 0;

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("%d\t", aList[i][j]);

        putchar('\n');
    }

    aList[0][3] = aList[0][0] + aList[0][1] + aList[0][2];
    aList[1][3] = aList[1][0] + aList[1][1] + aList[1][2];
    aList[2][0] = aList[0][0] + aList[1][0];
    aList[2][1] = aList[0][1] + aList[1][1];
    aList[2][2] = aList[0][2] + aList[1][2];
    aList[2][3] = aList[0][3] + aList[1][3];

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4; ++j)
            printf("%d\t", aList[i][j]);

        putchar('\n');
    }

    return 0;
}