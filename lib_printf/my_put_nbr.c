/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** function that display the number given as a parameter
*/

#include "../tetris.h"

int get_diff(int a, int difference, int dizaine)
{
    int first = a;
    int diff = difference;
    int diz = dizaine;

    while (diz > 1){
        first = first * 10;
        diz--;
    }
    first = first + diff;
    return (first);
}

int get_premier(int n, int dizaine)
{
    int first = n;
    int diz = dizaine;

    while (diz > 1){
        first = first / 10;
        diz--;
    }
    return (first);
}

int get_dizaine(int n)
{
    int a = n;
    int diz = 0;

    while (a > 0){
        a = a / 10;
        diz++;
    }
    return (diz);
}

void print_nombre(int n)
{
    int valeur = n;
    int dizaine = 0;
    int difference = 0;

    dizaine = get_dizaine(n);
    while (dizaine > 0){
        valeur = n - difference;
        valeur = get_premier(valeur, dizaine);
        difference = get_diff(valeur, difference, dizaine);
        my_putchar(48 + valeur);
        dizaine--;
    }
}