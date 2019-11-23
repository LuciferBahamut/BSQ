/*
** EPITECH PROJECT, 2019
** count_point
** File description:
** bsq
*/

#include "my.h"

int zap_first_ligne(char *map)
{
    int i = 0;

    while (map[i] != '\n') {
        i++;
    }
    return (i + 1);
}

int count_point(char *str)
{
    int c = 0;

    for (int i = zap_first_ligne(str); str[i] != '\0'; i++) {
        if (str[i] == '.')
            c++;
        if (str[i] == 'o')
             break;
    }
    return (c);
}
