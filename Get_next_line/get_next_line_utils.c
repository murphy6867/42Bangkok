/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:49:14 by murphy            #+#    #+#             */
/*   Updated: 2022/10/22 10:25:50 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*The Function ft_strlen use to count String in size_t data type.
    argument:
        *s : is input String.
    return:
        count : is number of total String.
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


