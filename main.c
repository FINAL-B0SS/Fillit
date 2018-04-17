/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/24 17:01:41 by maljean           #+#    #+#             */
/*   Updated: 2018/04/16 19:01:17 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_seperator(char *str, char c)
{
	char **dest;
	char *oldstr;

	oldstr = str;
	dest = (char **)malloc(sizeof(char *) * 27);
	while (*oldstr != '\0')
	{
		dest[g_piece] = ft_strnew(21);
		ft_strncpy(dest[g_piece], oldstr, 21);
		if (!ft_piece_check(str, 0, 0, 0)
				|| !ft_island_check(dest[g_piece], c, -1, 0))
		{
			ft_putstr("error\n");
			exit(0);
		}
		ft_island_check(dest[g_piece], c++, -1, 0);
		g_piece += 1;
		if (!oldstr[20])
			break ;
		oldstr += 21;
	}
	dest[g_piece] = NULL;
	return (dest);
}

char	*txt2array(char *txt, int x)
{
	int		fd;
	char	buf;
	char	*dest;

	fd = open(txt, O_RDONLY);
	while (read(fd, &buf, 1))
		x++;
	if (x < 20)
	{
		write(1, "error\n", 6);
		exit(0);
	}
	dest = ft_strnew(x);
	close(fd);
	x = 0;
	fd = open(txt, O_RDONLY);
	while (read(fd, &buf, 1))
		dest[x++] = buf;
	close(fd);
	return (dest);
}

int		main(int ac, char **av)
{
	char	*txt;
	char	**pieces;
	char	*map;
	int		size;

	size = 0;
	if (ac == 2)
	{
		txt = txt2array(av[1], 0);
		pieces = ft_seperator(txt, 'A');
		while (size * size < g_piece * 4)
			size += 1;
		map = ft_strnew(size * (size + 1));
		ft_map_gen(map, pieces, -1, size);
		ft_putchar('\n');
	}
	else
		ft_putstr("usage: fillit input_file\n");
	return (0);
}
