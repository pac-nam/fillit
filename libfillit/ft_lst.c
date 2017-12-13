/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 14:21:54 by tbleuse           #+#    #+#             */
/*   Updated: 2017/11/30 14:04:19 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

void	ft_tetrominos_rev(t_trominos **begin)
{
	t_trominos		*current;
	t_trominos		*prev;
	t_trominos		*next;

	prev = NULL;
	current = *begin;
	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin = prev;
}

int		ft_lst_trominos_size(t_trominos *list)
{
	int			i;
	t_trominos	*tmp;

	i = 0;
	tmp = list;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
