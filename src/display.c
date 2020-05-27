/*
** EPITECH PROJECT, 2019
** display
** File description:
** bsq
*/

#include "my.h"

void display(char **map, int d)
{
    int i = 0;
    d++;

    for (i++; i != d; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
}
