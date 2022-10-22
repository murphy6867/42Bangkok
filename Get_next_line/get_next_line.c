/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:27:25 by murphy            #+#    #+#             */
/*   Updated: 2022/10/22 10:24:28 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Description:
        - The Function use an open File descriptor and when fucntion call will return next line.
        - The Function has an undefined behavior when reading a binary file. 
        However, you can implement a logical way to handle this behavior if you want to.

    Parametor:
        - fd : file descriptor.

    Return:
        - The function returns a string from fd and ends at \n.
        - If an error occurs or there is nothing to read, NULL is return.
*/

#include"get_next_line.h"

char *get_next_line(int fd) {
    int readBytes;
    char *buffer;
    size_t count;

    buffer = malloc(sizeof(char) * 100);
    if(buffer < 0) {perror("malloc failure.\n"); exit(1);}

    readBytes = read(fd, buffer, 100);
    if(readBytes < 0) {perror("read error or signal interrupt.\n"); exit(1);}
    buffer[readBytes] = '\0';

    count = 0;
    while(buffer[count] != '\0')
    {
        count++;
    }

    close(fd);
    if(close < 0) {perror("close error.\n"); exit(1);}

    return(0);
}
/*
int main()
{
    int fd;
    char *result;
    result = malloc(sizeof(char) * 100);
    if(result < 0) {perror("malloc failure.\n"); exit(1);}

    fd = open("asd.txt", O_RDONLY);
    if (fd < 0) {perror("open failure.\n"); exit(1);}
    
    result = get_next_line(fd);
    printf("result : %s\n", result);
}*/

int main()
{
    char *str;
    str = "123456!@#ASD";
    printf("total : %zu\n", ft_strlen(str));
    return 0;
}