/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:30:31 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/12/09 10:14:18 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <fcntl.h>
# include <unistd.h>

char    *get_next_line(int fd);
char    *ft_strcat(char *dest, char *src);
void    *ft_memmove(void *dest, void *src, size_t n);
size_t  ft_strlen(const char *s);

#endif
