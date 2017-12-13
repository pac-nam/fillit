/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_third.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 19:42:51 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/30 12:56:36 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

int	*ft_verif_third_right_right(char *str, int i)
{
	if (i + 3 < 20 && str[i + 3] == '#')
		return (ft_fill_int_tab(1, 2, 3));
	if (i + 7 < 20 && str[i + 7] == '#')
		return (ft_fill_int_tab(1, 2, 7));
	return (NULL);
}

int	*ft_verif_third_right_down(char *str, int i)
{
	if (i + 7 < 20 && str[i + 7] == '#')
		return (ft_fill_int_tab(1, 6, 7));
	if (i + 11 && str[i + 11] == '#')
		return (ft_fill_int_tab(1, 6, 11));
	return (NULL);
}

int	*ft_verif_third_down_left(char *str, int i)
{
	if (i + 3 < 20 && str[i + 3] == '#')
		return (ft_special_h());
	if (i + 9 < 20 && str[i + 9] == '#')
		return (ft_special_d());
	return (NULL);
}

int	*ft_verif_third_down_right(char *str, int i)
{
	if (i + 7 < 20 && str[i + 7] == '#')
		return (ft_fill_int_tab(5, 6, 7));
	if (i + 11 < 20 && str[i + 11] == '#')
		return (ft_fill_int_tab(5, 6, 11));
	return (NULL);
}

int	*ft_verif_third_down_down(char *str, int i)
{
	if (i + 9 < 20 && str[i + 9] == '#')
		return (ft_special_o());
	if (i + 11 < 20 && str[i + 11] == '#')
		return (ft_fill_int_tab(5, 10, 11));
	if (i + 15 < 20 && str[i + 15] == '#')
		return (ft_fill_int_tab(5, 10, 15));
	return (NULL);
}
