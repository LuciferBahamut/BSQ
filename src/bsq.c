/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include "my.h"

int charlen(char **str, char *map)
{
    int a = 0;
    int b = count_point(map);
    int c = count_point(map);
    
    for (int i = 2, j = 0; i != c; i++) {
        for (j = 0, a = 0; str[i][j] != '\0'; j++) {
            if (str[i][j] == '.')
                a++;
            if (str[i][j] == 'o') {
                if (a < b)
                    b = a;
                i++;
                j = -1;
                if (i == c)
                    break;
            }
        }
        if (i == c)
            break;
    }
    return (b);
}

char **special_point(char **str, char *map)
{
        if (str[1][0] == '.') 
            str[1][0] = 'x';    
}

char **trans_point(char **str, char *map)
{
    int c = charlen(str, map);
    int k = c + 1;

    for (int j = 1; j != k; j++) {
        for (int i = 0; i != c; i++) {
            if (str[j][i] == '.')
                str[j][i] = 'x';
            if (str[j][i] == 'o') {
                j++;
                if (i < c)
                    break;
                i = -1;
            }
        }
    }
    return (str);
}

int bsq(char *map)
{
    char **str = my_split(map);

    if (compare_nbligne(str, map) == 84)
        return (84);
    if (compare_char(map) == 84)
        return (84);
    if (nbligne(map) == 1)
        special_point(str, map);
    if (nbligne(map) > 1)
        trans_point(str, map);
    display(str, nbligne(map));
    return (0);
}
