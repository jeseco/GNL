#include "get_next_line.h"

char    *clean_save(char *save, int i)
{
    char    *temp;
    int     new_save_len;

    if (!save)
        return (NULL);
    if (*(save + i) == '\0')
    {
        free (save);
        return (NULL);
    }
    new_save_len = ft_strlen(save) - i;
    temp = malloc(sizeof(char *) * new_save_len);
    ft_memmove(temp, save + i, new_save_len);
    clean_alloc(save, new_save_len + 1);
    ft_memmove(save, temp, new_save_len);
    free (temp);
    return (save);
}

char    *get_line(char *save)
{
    int     nl_size;
    char    *next_line;

    nl_size = 0;
    if (!save)
        return (NULL);
    while (save[nl_size] != '\0' && save[nl_size] != '\n')
        nl_size++;
    if (save[nl_size] == '\n' && nl_size == 0)
    {
        nl_size = 2;
        next_line = malloc(sizeof(char *) * nl_size);
        ft_memmove(next_line, "\n", 1);
        return (next_line);
    }
    next_line = malloc(sizeof(char *) * nl_size);
    ft_memmove(next_line, save, nl_size);
    return (next_line);
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
        if (bytes == 0)
        {
            free (buffer);
            return (save);
        }
        buffer[bytes] = '\0';
        save = ft_strscat(save, buffer);
    }
    free (buffer);
    return (save);
}

char    *get_next_line(int fd)
{ 
    char        *line;
    static char *save;

    if (!fd || fd < 3)
        return (NULL);
    if (!save)
        save = get_save(fd, save);
    line = NULL;
    line = get_line(save);
    save = clean_save(save, ft_strlen(line));
    return (line);
}