/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** otherfunc
*/

#include "tetris.h"

int my_strcmp(char *str1, char *str2)
{
    for (int i = 0; str1[i] == str2[i]; i = i + 1) {
        if (str1[i] == '\0' && str2[i] == '\0')
            return (0);
        if ((str1[i] != '\0' && str2[i] == '\0') ||
(str1[i] == '\0' && str2[i] != '\0'))
            return (-1);
    }
}

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        a++;
        i++;
    }
    return (dest);
}