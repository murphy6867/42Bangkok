/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 09:27:25 by murphy            #+#    #+#             */
/*   Updated: 2022/10/23 16:43:54 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

#include<unistd.h>

char    *get_line_string(int fd, char *lineString)
{
    char    *buffer;
    int     readString;

    buffer = (char*)malloc((BUFFER_SIZE + 1) * sizeof(char));
    if(buffer < 0)
    {
        return(NULL);
    }

    while(!ft_strchr(lineString, '\n'))
    {
        readString = read(fd, buffer, BUFFER_SIZE);
        if(readString == -1)
        {
            free(buffer);
            return(NULL);
        }
        buffer[readString] = '\0';
        lineString = ft_strjoin(lineString, buffer);
    }
    free(buffer);
    return(lineString);
}

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
char *get_next_line(int fd) {
    char    *newLine;
    static char *strLine;

    if(fd < 0 || BUFFER_SIZE <= 0)
    {
        return(0);
    }
    strLine = get_line_string(fd, strLine);
   if(strLine < 0)
   {
        return(0);
   }
   newLine = get_new_line(strLine);
   strLine = new_str(strLine);
   return(newLine);
}
