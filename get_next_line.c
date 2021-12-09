#include "get_next_line.h"

char    *clean_save(char *save, int i)
{

}

char    *get_line(char *save)
{
    if (!save || save == NULL || save[0] == "\0")
    {
        free (save);
        return (NULL);
    }
    
}

char    *get_save(int fd, char *save)
{
    int     bytes;
    char    *buffer;

    buffer = malloc(sizeof(char *) * BUFFER_SIZE + 1);
    bytes = 1;
    while (bytes > 0)
    {
        bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes == -1)
        {
            free (buffer);
            return (NULL);
        }
        buffer[bytes] = '\0';
        save = ft_strjoin(save, buffer);
    }
    free (buffer);
    return (save);
}

char    *get_next_line(int fd)
{ 
    char        *line;
    static char *save;

    if (!fd)
        return (NULL);
    if (!save)
        save = get_save(fd, save);
    line = get_line(save);
    return (line);
}