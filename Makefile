##
## EPITECH PROJECT, 2019
## makefile
## File description:
## BSQ
##

NAME	=	bsq

SRC	=	src/main.c \
		src/fs_file.c \
		src/my_putstr.c \
		src/my_putchar.c \
		src/bsq.c \
		src/display.c \
		src/my_split.c \
		src/nbligne.c \
		src/my_atoi.c \
		src/compare_nbligne.c

CC	=	gcc

CPPFLAGS	=	-I./include/

CFFLAGS	=	-W -Wextra -Wall -g3

OBJ	=	$(SRC:.c=.o)

all	:	$(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)
		rm -f *# \
		rm -f *~

re	:	fclean all

.PHONY	:	all clean fclean re
