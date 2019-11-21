/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** BSQ
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int fs_open_file(char const *file);
void my_putchar(char c);
int my_putstr(char const *str);
int bsq(char* buffer);
void display(char **map, int d);
int nbligne(char *map);
char **my_split(char *src);
int my_atoi(char const *str);
int compare_nbligne(char **str, char *src);

#endif
