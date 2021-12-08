#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>

char    *get_next_line(int fd);
char    *ft_strjoin(char *save, char *buffer);
int     strlen(char *str);
void    memcpy(char *dest, int start, char *src);

#endif 