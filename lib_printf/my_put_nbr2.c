/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_put_nbr2.c
*/

#include "../tetris.h"

int my_put_nbr(int nb)
{
    int n = nb;

    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n < 10){
        my_putchar(48 + n);
    } else {
        print_nombre(n);
    }
    return (0);
}