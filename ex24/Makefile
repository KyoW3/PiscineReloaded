# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwatanab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 11:59:12 by kwatanab          #+#    #+#              #
#    Updated: 2018/11/07 11:59:20 by kwatanab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
srcs/ft_swap.c
EXECS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: main

main: exec
	ar rc libft.a $(EXECS)

exec:
	gcc -c $(SRCS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a

re: fclean main
