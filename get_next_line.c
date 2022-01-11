#include "get_next_line.h"

char    *get_save(char *save, int fd)
{
    char    *buffer;
    int     bytes;

    bytes = 1;
    while (bytes > 0 && !(ft_strcat(save, '\n')))
    {
        bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes < 1)
        {
            free(buffer);
            return (ft_strchr(save, '\n'));
        }
        buffer[bytes] = '\0';
        ft_strcat(save, buffer);
        
    }
    return (ft_strcat(save, '\n'));
}

char    *get_next_line(int fd)
{
    static char *save;
    char        *sep;
    char        line;

    if (!fd || fd < 3)
        return (NULL);
    if (!save || save == NULL)
        sep = get_save(save, fd);
}