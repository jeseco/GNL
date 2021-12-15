#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char    *get_next_line(int fd);
void    ft_strscat(char *s1, char *s2);
size_t  ft_strlen(const char *s);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);

#endif 