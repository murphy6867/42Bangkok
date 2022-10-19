#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int fd;
    char *buffer;
    char *fakeBuff;
    int readBytes;
    int size;
    size_t count = 0, newline_count = 0;

    fd = open("asd.txt", O_RDONLY);
    if (fd < 0) {perror("open failure.\n"); exit(1);}

    buffer = malloc(sizeof(char) * 100);
    if(buffer < 0) {perror("malloc failure.\n"); exit(1);}

    readBytes = read(fd, buffer, 100);
    if(readBytes < 0) {perror("read error or signal interrupt.\n"); exit(1);}
    buffer[readBytes] = '\0';

    size = strlen(buffer);

    fakeBuff = malloc(sizeof(char) * size);
    if(fakeBuff < 0) {perror("malloc failure.\n"); exit(1);}

    while (size > 0)
    {
        if (buffer[size] == '\n')
        {
            newline_count++;
        }
        count++;
        size--;
    }

    
    //size = strlen(buffer);
   // printf("Buffer : %s", buffer);
  //  printf("\nString len : %d", size);
    printf("\nCount Char : %zu", count);
    printf("\nNew line : %zu", newline_count);
   // printf("\nFakeBuff : %s\n", fakeBuff);

    return(0);
}