# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaroste <anaroste@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/01 11:11:33 by anaroste          #+#    #+#              #
#    Updated: 2017/12/06 12:33:07 by tbleuse          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

CFLAG = -Wall -Wextra -Werror

SRC =									\
	./libfillit/ft_backtrack.c			\
	./libfillit/ft_create_lst.c			\
	./libfillit/ft_grid.c				\
	./libfillit/ft_lst.c				\
	./libfillit/ft_print.c				\
	./libfillit/ft_read.c				\
	./libfillit/ft_special_second.c		\
	./libfillit/ft_special_first.c		\
	./libfillit/ft_verif_second.c		\
	./libfillit/ft_verif_tetrominos.c	\
	./libfillit/ft_verif_third.c		\
	./libfillit/ft_verif_nl.c			\
	./libfillit/main.c					\
	./src/ft_putendl.c					\
	./src/ft_putstr.c					\
	./src/ft_sqrt.c						\
	./src/ft_strlen.c					\
	./src/ft_memalloc.c					\

OBJ =									\
	./ft_backtrack.o					\
	./ft_create_lst.o					\
	./ft_grid.o							\
	./ft_lst.o							\
	./ft_print.o						\
	./ft_read.o							\
	./ft_special_second.o				\
	./ft_special_first.o				\
	./ft_verif_second.o					\
	./ft_verif_tetrominos.o				\
	./ft_verif_third.o					\
	./ft_verif_nl.o						\
	./main.o							\
	./ft_putendl.o						\
	./ft_putstr.o						\
	./ft_sqrt.o							\
	./ft_strlen.o						\
	./ft_memalloc.o						\

$(NAME):
	$(CC) $(CFLAG) -c $(SRC)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ)


all: $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
