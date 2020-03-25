/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** open_read_directory
*/

#include "tetris.h"

void count_files(void)
{
    DIR *dir;
    struct dirent *dirent;
    dirent = malloc(sizeof(*dirent));

    dir = opendir("terminos_tetris");
    dirent = readdir(dir);
    while ((dirent = readdir(dir)) != NULL)
        inf->nbr_tetri = inf->nbr_tetri + 1;
    inf->nbr_tetri = inf->nbr_tetri - 1;
    free(dirent);
    closedir(dir);
}

void get_files_names(void)
{
    DIR *dir;
    int i = 0;
    struct dirent *dirent;
    info *list = malloc(sizeof(info) * 8);
    dirent = malloc(sizeof(*dirent));
    char *path = "terminos_tetris";

    dir = opendir("terminos_tetris");
    dirent = readdir(dir);
    while (dirent != NULL) {
        if (dirent->d_name[0] != '.') {
            list[i].name = strcat(dirent->d_name,":");
            i = i + 1;
        }
        dirent = readdir(dir);
    }
    free(dirent);
    closedir(dir);
}

void get