/*
** EPITECH PROJECT, 2019
** PSU_my_printf_bootstrap_2019
** File description:
** printf_2.c
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../tetris.h"

void my_redirection(char *str, int i, va_list *my_list) 
{
    if (str[i] == 's') 
       s_pourcent(my_list); 
    if (str[i] == 'd')
        d_pourcent(my_list);
    if (str[i] == 'i')
        i_pourcent(my_list);
    if (str[i] == 'c')
        c_pourcent(my_list);
    if (str[i] == 'n')
        n_pourcent(my_list, str);
    if (str[i] == '%')
        pourcent_pourcent(my_list);
}