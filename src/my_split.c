/*
** EPITECH PROJECT, 2019
** split
** File description:
** bsq
*/

#include "my.h"

char **my_split(char *src)
{
    char **str = malloc(nbligne(src) + 1);
    int i = 0;

    printf("A");
    for (int j = 0; src[i] != '\0'; i++) {
        if (src[i] == '\n') {
            src[i] = '\0';
            j++;
            i++;
            printf("C");
        }
        printf("B");
        str[j][i] = src[i];
    }
    printf("D");
    free(str);
    return (str);
}
