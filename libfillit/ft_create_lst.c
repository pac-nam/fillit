/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 13:07:50 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/02 13:46:17 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static t_trominos	*ft_listnew(int *tab, int c)
{
	t_trominos	*list;

	if ((list = malloc(sizeof(*list))) == NULL)
		return (NULL);
	list->p = tab;
	list->letter = ('A' + c);
	list->next = NULL;
	return (list);
}

static t_trominos	*ft_listadd(int *tab, int c, t_trominos *begin_list)
{
	t_trominos	*list;

	if ((list = (t_trominos*)malloc(sizeof(*list))) == NULL)
		return (NULL);
	list->p = tab;
	list->letter = ('A' + c);
	list->next = begin_list;
	return (list);
}

t_trominos			*ft_create_lst(int *tab, int c, t_trominos *begin_list)
{
	if (c == 0)
	{
		begin_list = ft_listnew(tab, c);
		if (begin_list == NULL)
			return (NULL);
	}
	else
		begin_list = ft_listadd(tab, c, begin_list);
	return (begin_list);
}
