/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usuario <usuario@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:36:06 by usuario           #+#    #+#             */
/*   Updated: 2022/05/25 13:07:20 by usuario          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t			ft_strlen(char *str);

/**
 * @brief searches for first occurrence of "c" in the string *str
 */
char			*ft_strchr(char *s, int c);

/**
 * @brief Allocates (with malloc) and returns a new string, which is the result
 * of the concatenation of ’s1’ and ’s2’.
 */
char			*ft_strjoin(char *s1, char *s2);

/**
 * @brief Reads a file from a file descriptor
 */
char			*ft_read_and_save(int fd, char *save);
char			*ft_get_line(char *save);
char			*ft_save(char *save);
char			*get_next_line(int fd);

#endif