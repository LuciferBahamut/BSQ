/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include "my.h"

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
        if (map[i] == '*') {
            break;
        }
        if (map[i] == '\n')
            i++;
        if (map[i] != '.')
            return (84);
        nbchar++;
    }
    return(nbchar);
}

int bsq(char *map)
{
//    my_split(map);
//        return (84);
    if (charlen(map) == 84)
        return (84);
    display(map, zap_firt_ligne(map));
    return (0);
}
