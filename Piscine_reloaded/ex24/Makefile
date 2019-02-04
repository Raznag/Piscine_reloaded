#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 10:50:06 by mzanouji          #+#    #+#              #
#    Updated: 2018/11/08 15:27:35 by mzanouji         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

FLAG = -Wall -Wextra -Werror

FILES = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

INCLUDES = includes

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) -c $(FILES) -I $(INCLUDES)
		ar rc $(NAME) $(OUT)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OUT)

fclean: clean
		/bin/rm -f $(NAME)

re:		fclean all
