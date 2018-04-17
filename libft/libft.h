/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maljean <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:14:56 by maljean           #+#    #+#             */
/*   Updated: 2018/03/28 00:34:55 by maljean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void			ft_bzero(void *s, size_t n);
void			*ft_memset(void *b, int c, size_t len);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
char			*ft_strncpy(char *dest, const char *src, size_t len);
char			*ft_strnew(size_t size);
size_t			ft_strlen(const char *s);

#endif
