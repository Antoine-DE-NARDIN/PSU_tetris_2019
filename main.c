/*
** EPITECH PROJECT, 2019
** PSU_bstetris_2019
** File description:
** main.c
*/

#include "tetris.h"

int main(int ac, char **av)
{
    inf = malloc(sizeof(info));
    set_basic_values();
    if (my_strcmp(av[1], "--help") == 0) {
        description();
    }
    if (my_strcmp(av[1], "-D") == 0 || my_strcmp(av[1], "--debug") == 0)
        debug_mode1();
    return (0);
}