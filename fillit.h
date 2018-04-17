/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 14:42:39 by maljean           #+#    #+#             */
/*   Updated: 2018/04/16 18:54:20 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./libft/libft.h"

int		g_piece;
int		ft_piece_check(char *str, int s, int nl, int d);
int		ft_island_check(char *str, char letter, int i, int d);
void	ft_map_gen(char *array, char **new, int x, int size);

#endif
