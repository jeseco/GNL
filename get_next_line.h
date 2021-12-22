#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char    *get_next_line(int fd);
char    *ft_strscat(char *s1, char *s2);
size_t  ft_strlen(char *s);
void    ft_memmove(char *dest, char*src, int size);
char    *clean_alloc(char *s, int size);

#endif 