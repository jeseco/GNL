#include "gnl_test.h"

void    green()
{
    printf("\033[0;32m");
}

void    red()
{
    printf("\033[1;31m");
}

void    reset()
{
    printf("\033[0m");
}