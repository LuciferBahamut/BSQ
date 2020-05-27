/*
** EPITECH PROJECT, 2019
** compare char
** File description:
** bsq
*/

#include "my.h"

int compare_char(char *str)
{
    int i = 1;

    while (str[i] != '\0') {
        if (str[i] == 'o' || str[i] == '.' || str[i] == '\n')
            i++;
        else
            return (84);
    }
    return (0);
}
