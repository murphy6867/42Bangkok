#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd, rd;
    char *cnt;

    cnt = (char*)malloc(100 * sizeof(char));

    fd = open("asd.txt", O_RDONLY);

    rd = read(fd, cnt, 100);
    cnt[rd] = '\0';

    printf("result = %s\n", cnt);
    return 0;
} 