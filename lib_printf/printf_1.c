/*
** EPITECH PROJECT, 2019
** PSU_my_printf_bootstrap_2019
** File description:
** printf_1.c
*/

#include <stdarg.h>
#include <unistd.h>
#include "../tetris.h"

void s_pourcent(va_list *my_list)
{
    char *str = va_arg(*my_list, char *);

    write (1, str, my_strlen(str));
}

void d_pourcent(va_list *my_list)
{
    int i = va_arg(*my_list, int);

    my_put_nbr(i);
}

void i_pourcent(va_list *my_list)
{
    int i = va_arg(*my_list, int);

    my_put_nbr(i);
}

void c_pourcent(va_list *my_list)
{
    char c = va_arg(*my_list, int);

    my_putchar(c);
}