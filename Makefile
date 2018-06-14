sr# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srheede <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 15:30:46 by srheede           #+#    #+#              #
#    Updated: 2018/05/22 23:15:13 by srheede          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

HEADER = libft.h

OBJ = $(SRCS:.c=.o)


FLAG = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAG) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

.PHONY: all
all: $(NAME)

.PHONY:	clean
clean:
	rm -f $(OBJ)

.PHONY:	fclean
fclean: clean
	rm -f $(NAME)

.PHONY:	re
re: fclean all

