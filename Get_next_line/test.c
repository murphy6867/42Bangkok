#include<string.h>
#include<stdio.h>

int main()
{
    char *str = "123456789";
    const char test = '4';

    printf("result : %s \n", strchr(str, test));
}