# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maljean <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/13 18:44:27 by maljean           #+#    #+#              #
#    Updated: 2018/04/16 18:55:12 by maljean          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

HEADER = fillit.h

FLAGS = -Wall -Wextra -Werror

SRCS = ft_check.c main.c ft_solve.c

LIB = libft/libft.a

all: $(NAME)

$(LIB):
	@make -C libft

$(NAME): $(LIB)
	@gcc $(FLAGS) $(SRCS) $(LIB) -I $(HEADER) -o $(NAME)

clean:
	@make -C libft clean

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean

re: fclean all
