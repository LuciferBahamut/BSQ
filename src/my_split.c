/*
** EPITECH PROJECT, 2019
** split
** File description:
** bsq
*/

#include "my.h"

char **my_split(char *src)
{
    char **str = malloc((nbligne(src) + 1) * sizeof(char *));
    int i = 0;

    for (int j = 0; src[i] != '\0'; i++) {
        if (src[i] == '\n') {
            src[i] = '\0';
            j++;
            i++;
        }
        str[j][i] = src[i];
    }
    free(str);
    return (str);
}
