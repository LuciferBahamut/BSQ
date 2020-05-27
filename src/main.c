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
    if (fs_open_file(av[1]) == 84)
        return (84);
    return (0);
}
