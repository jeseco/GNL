#include "gnl_test.h"

void    gnl_empty_test()
{
    int i = 0;
    int fd = open("test/files/empty", O_RDWR);
    printf("Empty file: ");
    while (i < 2)
    {
        char    *gnl_rtn = get_next_line(fd);
        if (i == 0)
        {
            if (gnl_rtn == NULL)
            {
                green();
                printf("OK!");
                reset();
            }
            else
            {
                red();
                printf("KO!");
                reset();
            }
        }
        else if (i == 1)
        {
            if (gnl_rtn == NULL)
            {
                green();
                printf("OK!");
                reset();
            }
            else
            {
                red();
                printf("KO!");
                reset();
            }
        }
        i++;
    }
}

int main(void)
{
    printf("Testing :\n");
    gnl_empty_test();
    return (0);
}