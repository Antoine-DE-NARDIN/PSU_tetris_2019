/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** description
*/

#include "tetris.h"

void description(void)
{
    write(1, "Usage: ./tetris [options]\nOption:\n  --help Display this ", 56);
    write(1, "help Display this help\n  -L --level={num} Start Tetris at", 57);
    write(1, " level num (def: 1)\n  -l --key-left={K} Move the tetrimin", 57);
    write(1, "o LEFT using the K key (def: left arrow)\n  -r --key-right", 57);
    write(1, "={K} Move the tetrimino RIGHT using the K key (def: right ", 58);
    write(1, "arrow)\n  -t --key-turn={K} TURN the tetrimino clockwise 9", 57);
    write(1, "0d using the K key (def: top arrow)\n  -d --key-drop={K} D", 57);
    write(1, "ROP the tetrimino using the K key (def: down arrow)\n  -q ", 57);
    write(1, "--key-quit={K} QUIT the game using the K key (def: 'q' key", 57);
    write(1, "\n  -p --key-pause={K} PAUSE/RESTART the game using the K ", 58);
    write(1, "key (def: space bar)\n  --map-size={row,col} Set the numbe", 57);
    write(1, "rs of rows and columns of the map (def: 20, 10)\n  -w --wi", 57);
    write(1, "thout-next Hide next tetrimino (def: false)\n  -D --debug ", 57);
    write(1, "Debug mode (def: false)\n", 24);
}