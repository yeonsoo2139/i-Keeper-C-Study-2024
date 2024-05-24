#include <stdio.h>

char *copy(char *s1, char *s2)
{
    while (*s2 != '\0')
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';

    return s1;
}

void main()
{
    char sen1[30] = "c언어";
    char sen2[30] = "과제";
    copy(sen1, sen2);
    printf("%s\n", sen1);
}