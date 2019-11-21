/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include "my.h"

char trans_point(char **str)
{
    int i = 0;

    for (int j = 0; ; i++)
    {
        if (str[j][i] == 'o') {
            j++;
            i = 0;
        }
        if (str[j][i] == '.')
            str[j][i] = 'X';
    }
}

int zap_firt_ligne(char *map)
{
    int i = 0;

    while (map[i] != '\n') {
        i++;
    }
    return (i + 1);
}

int charlen(char *map)
{
    int nbchar = 0;

    for (int i = zap_firt_ligne(map); map[i] != '\0'; i++) {
        if (map[i] == 'o') {
            break;
        }
        if (map[i] == '\n')
            i++;
        if (map[i] != '.')
            return (84);
        nbchar++;
    }
    return (0);
}

int bsq(char *map)
{
    char **str = my_split(map);

    display(str, nbligne(map));
    return (0);
}
