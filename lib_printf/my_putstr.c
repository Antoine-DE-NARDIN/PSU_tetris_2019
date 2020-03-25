/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** write one by one some characters of a string
*/

void my_putchar(char);

int my_putstr(char *str)
{
    char *i = str;

    while (*i != '\0') {
        my_putchar(*i);
        i++;
    }
    return (0);
}
