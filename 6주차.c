#include <stdio.h>
void swap_test(int *a, int *b);
int main(void)
{
    int val1 = 10;
    int val2 = 20;
    printf("Before val1 : %d\n", val1);
    printf("Before val2 : %d\n", val2);
    swap_test(&val1, &val2);

    printf("Afer val1: %d\n", val1);
    printf("Afer val2: %d\n", val2);
    return 0;
}

void swap_test(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}