/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_tetrominos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:40:24 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/01 12:57:06 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int				*ft_fill_int_tab(int one, int two, int three)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = one / 5;
	tab[1] = one % 5;
	tab[2] = two / 5;
	tab[3] = two % 5;
	tab[4] = three / 5;
	tab[5] = three % 5;
	return (tab);
}

static int		ft_verif_square(char *str)
{
	int i;
	int full;
	int empty;
	int n;

	i = 0;
	full = 0;
	empty = 0;
	n = 0;
	while (str[i] != '\0' && i < 20)
	{
		if (((i + 1) % 5) != 0 && str[i] == '#')
			full++;
		if (((i + 1) % 5) != 0 && str[i] == '.')
			empty++;
		if (((i + 1) % 5) == 0 && str[i] == '\n')
			n++;
		i++;
	}
	if (i != 20 || full != 4 || empty != 12 || n != 4 ||
			(str[i] != '\n' && str[i] != '\0'))
		return (0);
	return (1);
}

int				*ft_verif_tetrominos(char *str)
{
	int		i;

	i = 0;
	if (!(ft_verif_square(str)))
		return (NULL);
	while (str[i] != '#')
		i++;
	if (i + 5 < 20 && str[i + 1] == '#' && str[i + 5] == '#')
		return (ft_verif_second_both(str, i));
	if (i + 1 < 20 && str[i + 1] == '#')
		return (ft_verif_second_right(str, i));
	if (i + 5 < 20 && str[i + 5] == '#')
		return (ft_verif_second_down(str, i));
	return (NULL);
}
