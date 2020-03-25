/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** function that counts and returns the numbers of characters 
found in a string passed a paarameters
*/

int my_strlen(char *str)
{
    char *i = str;
    int count = 0;

    while (*i != '\0') {
        count++;
        i++;
    }
    return (count);
}