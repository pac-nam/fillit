/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_special_first.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 12:18:23 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/01 10:50:01 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		*ft_special_a(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 1;
	tab[3] = -1;
	tab[4] = 1;
	tab[5] = 0;
	return (tab);
}

int		*ft_special_d(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = 1;
	tab[1] = -1;
	tab[2] = 1;
	tab[3] = 0;
	tab[4] = 2;
	tab[5] = -1;
	return (tab);
}

int		*ft_special_h(void)
{
	int		*tab;

	if (!(tab = (int*)malloc(sizeof(int) * 6)))
		return (NULL);
	tab[0] = 1;
	tab[1] = -2;
	tab[2] = 1;
	tab[3] = -1;
	tab[4] = 1;
	tab[5] = 0;
	return (tab);
}
