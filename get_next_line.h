#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char    *get_next_line(int fd);
char    *ft_strchr(char *s, char c);
char    *ft_strcat(char *dest, char *src);
size_t  ft_strlen(char *s);
void    ft_memmove(char *dest, char*src, int size);

#endif 