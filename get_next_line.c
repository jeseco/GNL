/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:30:10 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/12/09 11:17:44 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void    clean_save(char *save, int nl_len)
{
    int     nsave_len;
    char    *temp;
    
    nsave_len = ft_strlen(save) - nl_len;
    if (!save)
        return ;
    if ((save && *save == '\0') || (nsave_len == 0))
    {
        free (save);
        return ;
    }
    temp = malloc(sizeof(char *) * nsave_len);
    ft_memmove(temp, save + nl_len, nsave_len);
    free (save);
    save = malloc(sizeof(char *) * nsave_len);
    ft_memmove(save, temp, nsave_len);
    free (temp);
}

void    get_line(char *save, char *line)
{
    int nl_len;

    if (!save)
    {
        free (save);
        free (line);
        return ;
    }
    nl_len = 0;
    while ((save[nl_len] && save[nl_len] != '\n') || save[nl_len] != '\0')
        nl_len++;
    if (!line)
    {
        line = malloc(sizeof(char *) * nl_len);
        ft_memmove(line, save, nl_len);
    }
    else
    {
        free (line);
        line = malloc(sizeof(char *) * nl_len);
        ft_memmove(line, save, nl_len);
    }
    clean_save(save, nl_len); 
}

char    *get_save(int fd)
{
    char    *rtn;
    char    *buffer;
    int     bytes;

    if (!fd)
        return (NULL);
    buffer = malloc(sizeof(char *) * BUFFER_SIZE + 1);
    bytes = 1;
    rtn = NULL;
    while (bytes > 0)
    {
        bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes == -1)
        {
            free (buffer);
            return (NULL);
        }
        buffer[bytes] = '\0';
        ft_strcat(rtn, buffer);
    }
    free (buffer);
    return (rtn);
}

char    *get_next_line(int fd)
{
    char            *line;
    static  char    *save;

    if (!fd || (fd < 3))
        return (NULL);
    if (!save)
        save = get_save(fd);
    line = NULL;
    get_line(save, line);
    return (line);
}