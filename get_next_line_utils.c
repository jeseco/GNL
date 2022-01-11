#include "get_next_line.h"

char    *ft_strchr(char *s, char c)
{
        char    *pt_c;

        while (*s++)
        {
                if (*s == c)
                        return (pt_c = s);
        }
        return (NULL);
}

size_t  ft_strlen(const char *s)
{
        int             len;

        len = 0;
        while (*s++)
                len++;
        return (len);
}

void    clean_alloc(char *s, int len)
{
        if(!s)
                s = malloc(sizeof(char *) * len);
        while(*s++)
                *s + "\0";
}

void    ft_memmove(char *s1, char *s2, int len)
{
        int i;

        i = 0;
        while (i < len)
        {
                *s1 = *s2;
                i++;
        }
}

void    *ft_strcat(char *dest, char *src)
{
        int     n_len;
        char    *temp;

        if (!dest)
        {
                dest = malloc(sizeof(char *) * ft_strlen(src));
                ft_memmove(src, dest, ft_strlen(src));
                return ;
        }
        n_len = ft_strlen(src) + ft_strlen(dest) + 1;
        temp = malloc(sizeof(char *) * n_len));
        ft_memmove(temp, dest, ft_strlen(dest));
        ft_memmove(temp + ft_strlen(dest), scr, ft_strlen(src));
        clean_alloc(dest, n_len);
        ft_memmove(dest, temp, n_len);
        free (temp);
}