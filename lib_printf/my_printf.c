/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_printf.c
*/

#include "../tetris.h"

void my_printf(char *str, ...)
{
    va_list my_list;
    int i = 0;

    va_start(my_list, str);
    for (; str[i] != 0; i += 1) {
        if (i != 0 && str[i-1] == '%') {
            my_redirection(str, i, my_list);
        } else if (str[i] != '%') {
            my_putchar(str[i]);
        }
    }
}