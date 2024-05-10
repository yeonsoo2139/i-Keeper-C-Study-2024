#include <stdio.h>

int aList[3] = {0};

int GetData(int i)
{
    scanf("%d", &aList[i]);
}

int GetMax()
{
    int nMax = aList[0];
    for (int i = 1; i < 3; ++i)
    {
        if (aList[i] > nMax)
        {
            nMax = aList[i];
        }
    }
    return nMax;
}

int printData(int nMax)
{
    printf("%d, %d, %d 중 가장 큰 수는 %d 입니다. \n",
           aList[0], aList[1], aList[2], nMax);
    return 0;
}

int main(void)
{

    int nMax = -9999;

    // 입력
    for (int i = 0; i < 3; ++i)
    {
        GetData(i);
    }

    nMax = GetMax();

    printf("%d\n", nMax);
    printData(nMax);
    return 0;
}
