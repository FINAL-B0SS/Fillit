# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maljean <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/03 19:25:02 by maljean           #+#    #+#              #
#    Updated: 2018/03/28 00:25:39 by maljean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror

SRCS = ft_strnew.c ft_strncpy.c ft_strlen.c ft_memset.c ft_bzero.c ft_putstr.c ft_putchar.c

OBJS = ft_strnew.o ft_strncpy.o ft_strlen.o ft_memset.o ft_bzero.o ft_putstr.o ft_putchar.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
