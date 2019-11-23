/*
** EPITECH PROJECT, 2019
** compare_nbligne
** File description:
** bsq
*/

#include "my.h"

int compare_nbligne(char **str, char *src)
{
    int ligne_stock = my_atoi(str[0]);
    int ligne_cont = nbligne(src);

    if (ligne_stock != ligne_cont)
        return (84);
    return (0);
}
