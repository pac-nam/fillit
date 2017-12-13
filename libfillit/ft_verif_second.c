/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_second.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:51:49 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/30 12:42:51 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int		*ft_verif_second_both(char *str, int i)
{
	if (i + 2 < 20 && str[i + 2] == '#')
		return (ft_fill_int_tab(1, 2, 5));
	if (i + 4 < 20 && str[i + 4] == '#')
		return (ft_special_a());
	if (i + 6 < 20 && str[i + 6] == '#')
		return (ft_fill_int_tab(1, 5, 6));
	if (i + 10 < 20 && str[i + 10] == '#')
		return (ft_fill_int_tab(1, 5, 10));
	return (NULL);
}

int		*ft_verif_second_right(char *str, int i)
{
	if (i + 6 < 20 && str[i + 2] == '#' && str[i + 6] == '#')
		return (ft_fill_int_tab(1, 2, 6));
	if (i + 2 < 20 && str[i + 2] == '#')
		return (ft_verif_third_right_right(str, i));
	if (i + 6 < 20 && str[i + 6] == '#')
		return (ft_verif_third_right_down(str, i));
	return (NULL);
}

int		*ft_verif_second_down(char *str, int i)
{
	if (i + 6 < 20 && str[i + 4] == '#' && str[i + 6] == '#')
		return (ft_special_n());
	if (i + 10 < 20 && str[i + 4] == '#' && str[i + 10] == '#')
		return (ft_special_l());
	if (i + 10 < 20 && str[i + 6] == '#' && str[i + 10] == '#')
		return (ft_fill_int_tab(5, 6, 10));
	if (i + 4 < 20 && str[i + 4] == '#')
		return (ft_verif_third_down_left(str, i));
	if (i + 6 < 20 && str[i + 6] == '#')
		return (ft_verif_third_down_right(str, i));
	if (i + 10 < 20 && str[i + 10] == '#')
		return (ft_verif_third_down_down(str, i));
	return (NULL);
}
