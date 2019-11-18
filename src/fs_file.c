/*
** EPITECH PROJECT, 2019
** fs_file
** File description:
** BSQ
*/

#include "my.h"

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int re;

    re = read(fd, buffer, size);
    if (re == -1)
        my_putstr("read failed\n");
    if (re == 0)
        my_putstr("read has nothing more to read\n");
    if (re < size)
        my_putstr("read didn't complete the entire buffer\n");
    if (re == size)
        my_putstr("read completed the entire buffer\n");
}

int fs_open_file(char const *filepath)
{
    int fd;
    char buffer[50];
    int size;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        my_putstr("FAILURE\n");
    else
        my_putstr("SUCCESS\n");
    for (int i = 0; buffer[i] != '\0'; i++)
        size++;
    fs_understand_return_of_read(fd, buffer, size);
    close (fd);
    return (0);
}
