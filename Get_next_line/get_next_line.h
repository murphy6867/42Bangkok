/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murphy <murphy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:35:13 by sngmasom          #+#    #+#             */
/*   Updated: 2022/10/23 16:43:19 by murphy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
#endif

char *get_next_line(int fd);
size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *str, int c);
char    *ft_strjoin(char const *s1, char const *s2);
char	*get_new_line(char *strLine);
char	*new_str(char *strLine);

#endif