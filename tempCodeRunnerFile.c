#include <stdio.h>

int main(void)
{
    int aList[1000000] = {20, 10, 35, 30, 7};

    int i = 0, nMax = aList[0], nMin = aList[0];
    int nLength = 0;

    while (aList[nLength] != '\0')
    {
        nLength++;
    }

    for (i = 1; i < 5; ++i)
    {
        if (aList[i] > nMax)
        {
            nMax = aList[i];
        }
    }

    for (i = 1; i < 5; ++i)
    {
        if (aList[i] < nMin)
        {
            nMin = aList[i];
        }
    }
    printf("%d\n", nLength);
    printf("MAX : %d MIN : %d", nMax, nMin);

    return 0;
}