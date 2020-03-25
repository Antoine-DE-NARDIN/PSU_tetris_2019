/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** printf_2.c
*/

#include <stdarg.h>
#include <unistd.h>
#include "../tetris.h"

void n_pourcent(va_list *my_list, char *str)
{
    int i = my_strlen(str);

    my_put_nbr(i);
}

void pourcent_pourcent(va_list *my_list)
{
    my_putchar('%');
}
