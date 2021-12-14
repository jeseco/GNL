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

char    *ft_strjoin(char *s1, char *s2)
{
        size_t  s1_len;
        size_t  s2_len;
        size_t  stot_len;
        char    *rtn;

        if (!s1 && s2)
                return (ft_strdup(s2));
        s1_len = ft_strlen((char *)s1);
        s2_len = ft_strlen(s2);
        stot_len = s1_len + s2_len + 1;
        rtn = malloc(sizeof(char) * stot_len);
        if (!rtn)
                return (0);
        ft_memmove(rtn, s1, s1_len);
        ft_memmove(rtn + s1_len, s2, s2_len);
        rtn[stot_len - 1] = '\0';
        return (rtn);
}