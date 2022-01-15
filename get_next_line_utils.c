#include "get_next_line.h"

char    *ft_strchr(char *s, char c)
{
        int     i;

        i = 0;
        if (s)
        {
                while (s[i])
                {
                        if (s[i] == c)
                                return (s + i);
                        i++;
                }
        }
        return (NULL);
}

size_t  ft_strlen(char *s)
{
        int             len;

        len = 0;
        if (s && s != NULL)
                while (*s++)
                        len++;
        return (len);
}

void    ft_memmove(char *dest, char *src, int len)
{
        int i;

        i = 0;
        while (i < len)
        {
                dest[i] = src[i];
                i++;
        }
        dest[len] = '\0';
}

char   *ft_strcat(char *dest, char *src)
{
        char    *temp;
        int     n_len;

        if (!dest)
        {
                dest = malloc(sizeof(char *) * ft_strlen(src));
                ft_memmove(dest, src, ft_strlen(src));
                dest[ft_strlen(src)] = '\0';
                return (dest);
        }
        n_len = ft_strlen(dest) + ft_strlen(src);
        temp = malloc(sizeof(char *) * n_len + 1);
        ft_memmove(temp, dest, ft_strlen(dest));
        ft_memmove(temp + ft_strlen(dest), src, ft_strlen(src));
        temp[n_len] = '\0';
        free (dest);
        dest = malloc(sizeof(char *) * n_len + 1);
        ft_memmove(dest, temp, n_len);
        dest[n_len] = '\0';
        free (temp);
        return (dest);
}