/*
** EPITECH PROJECT, 2019
** nbligne
** File description:
** bsq
*/

int nbligne(char *map)
{
    int nbligne = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            nbligne++;
    }
    return (nbligne);
}
