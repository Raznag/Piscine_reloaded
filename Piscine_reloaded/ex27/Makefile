#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzanouji <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 13:29:34 by mzanouji          #+#    #+#              #
#    Updated: 2018/11/08 13:53:46 by mzanouji         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = ./ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror ft_display_file.c
	gcc -o ft_display_file ft_display_file.o

clean:
		/bin/rm -f *.o 

fclean: clean
		/bin/rm -f $(NAME)
