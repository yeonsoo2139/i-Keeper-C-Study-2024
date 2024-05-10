#include <stdio.h>

int Getfee(int age, int fee)
{
    if (age >= 0 && age <= 3)
    {
        printf("요금은 %d 원입니다 \n", 0);
    }

    else if (age >= 4 && age <= 13)
    {
        printf("요금은 %d 원입니다 \n", fee / 2);
    }
    else if (age >= 14 && age <= 19)
    {
        printf("요금은 %f 원입니다 \n", fee * 0.75);
    }
    else
    {
        printf("요금은 %d 원입니다 ]n", fee);
    }
}

int main(void)
{
    Getfee(13, 2000);
}