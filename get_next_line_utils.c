#include "get_next_line.h"

size_t  ft_strlen(char *s)
{
        int             len;

        len = 0;
        if (!s || s == NULL)
                return (0);
        if (s)
                while (*s++)
                        len++;
        return (len);
}

char    *clean_alloc(char *s, int size)
{
        int i;

        i = 0;
        if (s)
                free (s);
        s = malloc(sizeof(char *) * size + 1);
        while (i <= size + 1)
        {
                *(s +i) = '\0';
                i++;
        }
        return (s);
}

void    ft_memmove(char *dest, char*src, int size)
{
        int i;

        i = 0;
        while (i <= size)
        {
                dest[i] = src[i];
                i++;
        }
}

char    *ft_strscat(char *s1, char *s2)
{
        int     rtn_size;
        char    *temp;
       
        if (!s1)
        {
                rtn_size = ft_strlen(s2) + 1;
                // s1 = clean_alloc(s1, rtn_size);
                s1 = malloc(sizeof(char *) * rtn_size);
                ft_memmove(s1, s2, rtn_size);
                return (s1);
        }
        rtn_size = ft_strlen(s1) + ft_strlen(s2) + 1;
        temp = NULL;
        temp = malloc(sizeof(char *) * rtn_size);
        ft_memmove(temp, s1, ft_strlen(s1));
        ft_memmove(temp + ft_strlen(s1), s2, ft_strlen(s2));
        temp[rtn_size] = '\0';
        free (s1);
        s1 = malloc(sizeof(char *) * rtn_size);
        ft_memmove(s1, temp, rtn_size);
        s1[rtn_size] = '\0';
        free (temp);
        return (s1);
}
