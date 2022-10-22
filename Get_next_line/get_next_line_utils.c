/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:49:14 by murphy            #+#    #+#             */
/*   Updated: 2022/10/22 14:46:35 by murphy           ###   ########.fr       */
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
    argument:
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
        The function ft_strjoin is used to concatenate two strings.
    argument:
        strL - The first string to be connected.
        strR - The second string to be connected.
    return:
        This function returns a new string connected between the first and the second string.
        or NULL if input strL and strR incorrect. 
*/
char    *ft_strjoin(char const *strL, char const *strR)
{
    int count1;
    int count2;
    char *newString;

    if(!strL || !strR)
        return(NULL);
    newString = (char*)malloc((ft_strlen(strL) + ft_strlen(strR)) + 1);
    if(newString == NULL)
        return(NULL);
    count1 = 0;
    count2 = 0;
    while(strL[count1] != '\0')
    {
        newString[count1] = strL[count1];
        count1++;
    }
    while(strR[count2] != '\0')
    {
        newString[count1++] = strR[count2++];
    }
    newString[ft_strlen(strL) + ft_strlen(strR)] = '\0';
    return(newString);
}




int main()
{
    char *str = "";
    char *str2 = "";

    printf("str1: %s + str2: %s == %s\n", str, str2, ft_strjoin(str, str2));
}