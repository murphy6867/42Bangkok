/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:49:14 by murphy            #+#    #+#             */
/*   Updated: 2022/10/22 13:48:35 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*  description: 
        The function ft_strlen use to count String in size_t data type.
    argument:
        *s - is input String.
    return:
        count - is number of total String.
*/
size_t  ft_strlen(const char *s)
{
    size_t  count;

    count = 0;
    if(!s)
    {
        return(0);
    }
    while (s[count] != '\0')
    {
        count++;
    }
    return(count);
}



/*
    description:
        The function ft_strchr searches for the first occurrence of the character c
        in the string pointed to by the argument str.
    parameters:
        str − This is the C string to be scanned.
        c − This is the character to be searched in str.
    return:
        This returns a pointer to the first occurrence of the character c 
        in the string str, or NULL if the character is not found.
*/
char    *ft_strchr(const char *str, int c)
{
    int count;

    if(c == '\0')
    {
        return((char *)str);
    }
    count = 0;
    while(str[count] != '\0')
    {
        if(str[count] == c)
        {
            return((char *)str + count);
        }
        count++;
    }
    return(0);
}



/*
    desciption: 
    
*/





int main()
{
    char *str = "123456";
    const char test = '\0';

    printf("find %c in %s result = %s", test, str, ft_strchr(str, test));
}