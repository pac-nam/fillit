/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_global.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 10:55:48 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/10 16:50:17 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static int		ft_wrong_arg(void)
{
	char		*str;

	str = "usage: ./fillit source_file\n";
	write(1, str, ft_strlen(str));
	return (0);
}

static int		ft_invalid_file(void)
{
	write(1, "error\n", 6);
	return (0);
}

int				main(int ac, char **av)
{
	t_trominos	*begin_list;
	char		*str;
	int			i;

	begin_list = NULL;
	i = 0;
	if (ac != 2)
		return (ft_wrong_arg());
	if (!(str = (ft_read(av[1]))))
		return (0);
	while (str[i])
	{
		begin_list = ft_create_lst(ft_verif_tetrominos(&str[i]),
				(i / 21), begin_list);
		if (!(begin_list->p))
			return (ft_invalid_file());
		i = i + 21;
	}
	if (!(ft_verif_nl(ft_lst_trominos_size(begin_list), str)))
		return (ft_invalid_file());
	ft_tetrominos_rev(&begin_list);
	ft_print(ft_grid(begin_list));
	return (0);
}
