/*
** EPITECH PROJECT, 2019
** display
** File description:
** bsq
*/

#include "my.h"

void display(char *map, int i)
{
    while (map[i] != '\0') {
        my_putchar(map[i]);
        i++;
    }
}
