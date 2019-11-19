/*
** EPITECH PROJECT, 2019
** main
** File description:
** BSQ
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac > 2 || ac < 2)
        return (84);
    fs_open_file(av[1]);
    return (0);
}
