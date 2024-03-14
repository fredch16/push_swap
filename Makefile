# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcharbon <fcharbon@student.42london.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 18:20:00 by fcharbon          #+#    #+#              #
#    Updated: 2024/03/14 19:20:12 by fcharbon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := gcc
CFLAGS := -Wall -Werror -Wextra -g
SRCS := big_stakka.c \
		ineedhelphere.c \
		ops1.c \
		ops2.c \
		ops3.c \
		algo1.c \
		casesa.c \
		casesb.c \
		powersort.c \
		rotateandpush.c \
		rotatetype.c 
INCLUDE := push_swap.h
OBJ := $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lft -Llibs/libft -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
