/*
** EPITECH PROJECT, 2019
** PSU_bstetris_2019
** File description:
** debug_mode.c
*/

#include "tetris.h"

void debug_mode1(void)
{
    write(1, "*** DEBUG MODE ***\n", 19);
    write(1, "Key Left : ", 11);
    my_printf("%s\n", inf->left);
    write(1, "Key Right : ", 12);
    my_printf("%s\n", inf->right);
    write(1, "Key Turn : ", 11);
    my_printf("%s\n", inf->turn);
    write(1, "Key drop : ", 11);
    my_printf("%s\n", inf->drop);
    write(1, "Key Quit : ", 11);
    my_printf("%s\n", inf->quit);
    write(1, "Key Pause : ", 12);
    my_printf("%s\n", inf->pause);
    write(1, "Next : ", 7);
    my_printf("%s\n", inf->next);
    write(1, "Level : ", 8);
    my_printf("%d\n", inf->level);
    write(1, "Size : ", 7);
    my_printf("%s\n", inf->map_size);
    debug_mode2();
}

void debug_mode2(void)
{
    count_files();
    my_printf("%s %d\n", "Tetriminos : ", inf->nbr_tetri);
    get_files_names();
}