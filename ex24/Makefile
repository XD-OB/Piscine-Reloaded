# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <OB-96@hotmail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 00:50:30 by obelouch          #+#    #+#              #
#    Updated: 2018/10/04 00:50:33 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

SRCS = srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEAD = includes/ft.h

OUTO = ft_putstr.o ft_putchar.o ft_swap.o ft_strcmp.o ft_strlen.o

OPT = -Wall -Wextra -Werror

all: $(LIB)

$(LIB):
	gcc -c $(SRCS) $(HEAD) $(OPT)
	ar rc $(LIB) $(OUTO)
	ranlib $(LIB)

clean:
	/bin/rm -f $(OUTO)

fclean: clean
	/bin/rm -f $(LIB)

re: fclean all
