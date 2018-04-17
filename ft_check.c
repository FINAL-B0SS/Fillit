/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 17:00:55 by maljean           #+#    #+#             */
/*   Updated: 2018/04/16 18:52:44 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_island_check(char *str, char c, int i, int d)
{
	while (str[++i])
		if (str[i] == '#' || str[i] == c)
		{
			str[i] = c;
			(str[i - 1] && (str[i - 1] == '#' || str[i - 1] == c)) ? d++ : d;
			(str[i + 1] && (str[i + 1] == '#' || str[i + 1] == c)) ? d++ : d;
			(str[i - 5] && (str[i - 5] == '#' || str[i - 5] == c)) ? d++ : d;
			(str[i + 5] && (str[i + 5] == '#' || str[i + 5] == c)) ? d++ : d;
		}
	return (d == 6 || d == 8 ? 1 : 0);
}

int		ft_piece_check(char *str, int h, int nl, int d)
{
	int	i;

	i = 0;
	while (str[i] == '#' || str[i] == '.' || str[i] == '\n')
	{
		(str[i] == '#') ? h++ : h;
		(str[i] == '.') ? d++ : d;
		(str[i] == '\n') ? nl++ : nl;
		if (i + 1 == 21)
			if (str[i] != '\n')
				return (0);
		i++;
	}
	return (((h % 4 == 0) && ((nl + 1) % 5 == 0) && (d % 12 == 0) &&
				((i + 1) % 21 == 0)) ? 1 : 0);
}
