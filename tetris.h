/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** tetris
*/

#ifndef TETRIS_H_
#define TETRIS_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <curses.h>
#include <string.h>
#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdarg.h>
#include <dirent.h>
#include <sys/types.h>

#define UNUSED __attribute__((unused))

struct info *inf;

typedef struct info
{
    char *left;
    char *right;
    char *turn;
    char *drop;
    char *quit;
    char *pause;
    char *next;
    int level;
    char *map_size;
    int nbr_tetri;
    char *name;
    char *color;
    char *size;

}info;

void s_pourcent(va_list *my_list);
void d_pourcent(va_list *my_list);
void i_pourcent(va_list *my_list);
void c_pourcent(va_list *my_list);
void n_pourcent(va_list *my_list, char *str);
void pourcent_pourcent(va_list *my_list);
void my_printf(char *str, ...);
void my_redirection(char * str, int i, va_list *my_list);
int get_diff(int a, int difference, int dizaine);
int get_premier(int n, int dizaine);
int get_dizaine(int n);
void print_nombre(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char *str);
int my_strlen(char *str);
void debug_mode1(void);
void debug_mode2(void);
void description(void);
int my_strcmp(char *str1, char *str2);
void set_basic_values(void);
void count_files(void);
char *my_strcat(char *dest, char *src);
void print_file_content(void);

#endif /* !TETRIS_H_ */