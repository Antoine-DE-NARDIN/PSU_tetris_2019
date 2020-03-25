/*
** EPITECH PROJECT, 2020
** PSU_bstetris_2019
** File description:
** flags
*/

#include "tetris.h"

// void flag_finders(int ac, char **av)
// {
//     int i = 0;

//     while (getopt(ac, av, "helpL:r:l:t:d:q:p:map_size:w:Dlevel:") != -1 && \
// getopt(ac, av, "key-left:key-right:key-turn:key-drop:key-quit:key-pause:\
// without-next:debug" != -1)) {

//     }
// }

void set_basic_values(void)
{
    inf->level = 1;
    inf->left = "^EOD";
    inf->right = "^EOC";
    inf->turn = "^EOA";
    inf->drop = "^EOB";
    inf->quit = "q";
    inf->pause = "(space)";
    inf->map_size = "20*10";
    inf->next = "false";
}