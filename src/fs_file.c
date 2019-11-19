/*
** EPITECH PROJECT, 2019
** fs_file
** File description:
** BSQ
*/

#include "my.h"

int fs_open_file(char const *file)
{
    int fd;
    int re;
    char *buffer;
    struct stat st;
    
    fd = open(file, O_RDONLY);
    if (fd == -1)
        return (84);
    stat(file, &st);
    buffer = malloc(st.st_size + 1);
    re = read(fd, buffer, st.st_size);
    if (re == -1 || re == 0)
        return (84);
    write(1, buffer, st.st_size);
    close (fd);
    free (buffer);
    return (0);
}
