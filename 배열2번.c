#include <stdio.h>

int main(void)
{
    int aList[9] = {3, 29, 38, 12, 57, 74, 40, 85, 61};
    int j = 0;
    int i = 0, nMax = aList[0];

    for (i = 1; i < 9; ++i)
    {
        if (aList[i] > nMax)
        {
            nMax = aList[i];
            j = i;
        }
    }

    printf("MAX : %d\n %d", nMax, j);

    return 0;
}