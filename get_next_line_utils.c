/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcourtem <jcourtem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 09:30:18 by JEAN-SEBA         #+#    #+#             */
/*   Updated: 2021/12/09 10:13:21 by jcourtem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void    *ft_memmove(void *dest, void *src, size_t n)
{
        char            *pt_dest;
        const char      *pt_src;
        char            *last_dest;
        const char      *last_src;

        last_dest = dest + (n - 1);
        last_src = src + (n - 1);
        pt_dest = dest;
        pt_src = src;
        if (!dest && !src)
                return (0);
        if (pt_dest < pt_src)
                while (n--)
                        *pt_dest++ = *pt_src++;
        else
        {
                while (n--)
                        *last_dest-- = *last_src--;
        }
        return (dest);
}

size_t  ft_strlen(const char *s)
{
        int             len;

        len = 0;
        while (*s++)
                len++;
        return (len);
}

void    ft_strcat(char *dest, char *src)
{   
    int     dest_len;
    int     src_len;
    int     tot_len;
    char    *temp;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    tot_len = dest_len + src_len;
    if (dest && !src)
        return ;
    else if (!dest && src)
    {
        dest = malloc(sizeof(char *) * src_len);
        ft_memmove(dest, src);
        return ;
    }
    else if (dest && src)
    {
        temp = malloc(sizeof(char *) * dest_len);
        ft_memmove(temp, dest, dest_len);
        free (dest);
        dest = malloc(sizeof(char *) * tot_len);
        ft_memmove(dest, temp, dest_len);
        free (temp);
        ft_memmove(dest, src, src_len);
    }
}
