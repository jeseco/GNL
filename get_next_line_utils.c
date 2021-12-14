#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
        int             len;

        len = 0;
        if (s)
                while (*s++)
                        len++;
        return (len);
}

char    *ft_strdup(const char *s1)
{
        char    *ptr;
        size_t  len;

        len = ft_strlen(s1) + 1;
        ptr = malloc(len);
        if (ptr == NULL)
                return (NULL);
        return ((char *) ft_memcpy(ptr, s1, len));
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
        char            *dstc;
        const char      *srccc;

        if ((dst == src) || n == 0)
                return (dst);
        if (!dst && !src)
                return (0);
        dstc = (char *)dst;
        srccc = (const char *)src;
        while (n--)
                dstc[n] = srccc[n];
        return (dst);
}

void    *ft_memmove(void *dest, const void *src, size_t n)
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

char    *ft_strscat(char *s1, char *s2)
{
/*
fait une variable temporaire nomme temp de type char *, 
alloue lui de la memoire de la taille de s1 et s2 ensemble,
copy la memoire de s1 dans temp,
copy la memoire de s2 dans temp, depuis la dernier place allouer de s1
si s1 exist, libere s1,le de 
alloue lui de la memoire de la tails1 et s2 ensemble, 
copy la memoire de temp dans s1,
libere la memoire de temp, 
retourne s1,
*/
}