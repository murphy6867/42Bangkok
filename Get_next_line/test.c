#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int count1;
    int count2;
    char *newString;
    char *strL = "123";
    char *strR = "ABCD";

    newString = (char*)malloc((strlen(strL) + strlen(strR)) + 1);
    count1 = 0;
    count2 = 0;
    while(strL[count1] != '\0')
    {
        newString[count1] = strL[count1];
        count1++;
        printf("1: %s\n", newString);
    }
    while(strR[count2] != '\0')
    {
        newString[count1++] = strR[count2++];
        printf("2: %s\n", newString);
    }
    newString[strlen(strL) + strlen(strR)] = '\0';
    printf("str1: %s + str2: %s = %s\n",strL, strR, newString);
}
