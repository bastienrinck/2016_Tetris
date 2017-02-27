##
## Makefile for Makefile in /home/thibrex/delivery/CPool_Day10/do-op
## 
## Made by Thibaut Cornolti
## Login   <thibaut.cornolti@epitech.eu>
## 
## Started on  Sat Oct 15 22:12:03 2016 Thibaut Cornolti
## Last update Mon Feb 27 18:26:29 2017 Thibaut Cornolti
##
SRC	=	tetris.c	\
		parser.c	\
		parser_utils.c	\
		parser_utils_2.c\
		utils.c		\
		debug.c		\
		tetrimino.c	\
		set_rotated.c	\

OBJS	=	$(SRCS:.c=.o)

NAME	=	tetris

CC	=	gcc -g

HEADER	=	include/

RM	=	rm -f

LIB_P	=	-Llib/my

LIB	=	-lmy

all:	$(NAME)

$(NAME):
	cd lib/my/ && make
	$(CC) -o $(NAME) -I$(HEADER) $(SRC) $(LIB_P) $(LIB) -Wall -Wextra -pedantic

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
