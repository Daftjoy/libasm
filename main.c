#include "libasm.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    char *dest;
    int fd;

    fd = open("text.txt", 0);
    dest = malloc(16);
    printf("%d\n", fd);
    printf("%d\n", ft_strlen("hola"));
    printf("%d\n", ft_strlen(""));
    printf("%d\n", ft_strlen("3456677"));
    printf("%d\n", ft_strlen("2"));


    printf("%s\n", ft_strcpy(dest, "hola"));
    printf("%d\n", strcmp("ho", "hol"));
    printf("%d\n", ft_strcmp("", ""));


    ft_write(1, "hola qué tal\n", 14);
    printf("%s\n", dest);
    free(dest);
    dest = malloc(16);
    ft_read(fd,dest, 14);
    printf("%s\n", dest);


    printf("%s\n", ft_strdup("ggg"));
    return (0);
}