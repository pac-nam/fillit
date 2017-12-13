/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_nl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:08:57 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/01 13:15:30 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_verif_nl(int ref, char *str)
{
	int		verif;

	verif = 0;
	ref = (ref * 5) - 1;
	while (*str)
		if (*str++ == '\n')
			verif++;
	if (ref == verif)
		return (1);
	return (0);
}