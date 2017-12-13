/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_second.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:26:39 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/01 10:50:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		*ft_special_l(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = 1;
	tab[1] = -1;
	tab[2] = 1;
	tab[3] = 0;
	tab[4] = 2;
	tab[5] = 0;
	return (tab);
}

int		*ft_special_n(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = 1;
	tab[1] = -1;
	tab[2] = 1;
	tab[3] = 0;
	tab[4] = 1;
	tab[5] = 1;
	return (tab);
}

int		*ft_special_o(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = 1;
	tab[1] = 0;
	tab[2] = 2;
	tab[3] = 0;
	tab[4] = 2;
	tab[5] = -1;
	return (tab);
}
