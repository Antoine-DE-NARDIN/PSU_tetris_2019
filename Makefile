##
## EPITECH PROJECT, 2019
## PSU_bstetris_2019
## File description:
## Makefile
##

SRC =	lib_printf/my_printf.c \
		lib_printf/my_put_nbr.c \
		lib_printf/my_put_nbr2.c \
		lib_printf/my_putchar.c \
		lib_printf/my_putstr.c \
		lib_printf/my_redirection.c \
		lib_printf/my_strlen.c \
		lib_printf/printf_1.c \
		lib_printf/printf_2.c \
		main.c \
		debug_mode.c \
		description.c \
		flags.c \
		otherfunc.c \
		open_read_directory.c

OBJ = $(SRC:.c=.o)

CC = gcc -g3

NAME = tetris

all: $(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -W -Wall -Wextra

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY: all bin clean fclean re