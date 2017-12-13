/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 14:32:00 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/06 12:39:48 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

char		**ft_free_grid(char **grid, int len)
{
	if (!grid)
		return (NULL);
	while (len >= 0)
		free(grid[len++]);
	free(grid);
	return (NULL);
}

char		**ft_grid_init(char **grid, int len)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(grid = (char**)malloc(sizeof(char*) * len + 2)))
		return (NULL);
	while (i < len)
	{
		if (!(grid[i] = (char*)malloc(sizeof(char) * len + 2)))
			return (NULL);
		grid[i][len] = '\0';
		i++;
	}
	grid[len] = NULL;
	i = 0;
	while (i < len)
	{
		while (j < len)
			grid[i][j++] = '.';
		i++;
		j = 0;
	}
	return (grid);
}
