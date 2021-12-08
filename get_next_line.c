#include "get_next_line.h"

char    *clean_save(char *save, char *has_rtn)
{
    char    *rtn_save;

    rtn_save = malloc(sizeof(char *) * strlen(has_rtn));
    memcpy(rtn_save, 1, has_rtn);
    free (save);
    return (rtn_save);
}

char    *get_line(char *save, char *has_rtn)
{
    char    *line;
    int     line_len;
    int     i;

    line_len = (strlen(save) - strlen(has_rtn) + 1);
    line = malloc(sizeof(char *) * line_len);
    i = 0;
    while (save + i <= has_rtn)
    {
        line[i] = save[i];
        i++;
    }
    line[i + 1] = "\0";
    save = clean_save(save, has_rtn);
    return (line)
}

void    read

char    *get_next_line(int fd)
{
    int         bytes;
    char        *has_rtn;   
    char        *line;
    char        *buffer;
    static char *save;

    if (!fd)
        return (NULL);
    bytes = 1;
    while (bytes > 0 && !has_rtn)
    {
        bytes = read(fd, buffer, BUFFRE_SIZE);
        if (bytes == -1)
        {
            free (buffer);
            return (NULL);
        }
        save = ft_strjoin(save, buffer);
        has_rtn = strchr(save);
    }
    if (has_rtn)
        line = get_line(save, has_rtn);
    return (line);
}