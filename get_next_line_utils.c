#include "get_next_line.h"

char    *has_rtn(char save)
{
    char    *rtn_char;
    
    if (!save)
        return (NULL);
    while (save[i])
    {
        if (save[i] = "\n")
            rtn_char = save + i;
        i++;
    }
    return (rtn_char);
}

void    memcpy(char *dest, int start, char *src)
{
    int i;

    i = 0;
    while (dest[start])
        dest[start] = src[i];
}

int strlen(char *str)
{
    int len;

    len = 0;
    if (!str)
        return (len);
    while (str[len])
        len++;
    return (len);
}

char    *ft_strjoin(char *save, char *buffer)
{
    int     save_len;
    int     buffer_len;
    int     total_len;
    char    *rtn;

    save_len = strlen(save);
    buffer_len = strlen(buffer);
    total_len = save_len + buffer_len + 1;
    rtn = malloc(sizeof(char *) * total_len);
    if (!rtn)
        return (NULL);
    memcpy(rtn, 0, save);
    memcpy(rtn, save_len, buffer);
    free (save);
    return (save);
}