/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:01:45 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/01 12:47:59 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void		ft_putendl(char const *str)
{
	int		x;

	x = 0;
	if (str == NULL)
		return ;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z') || (str[x] == '.'))
			write(1, &str[x], 1);
		x++;
	}
	write(1, "\n", 1);
}