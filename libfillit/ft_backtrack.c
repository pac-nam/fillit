/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbleuse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 10:37:40 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/10 16:49:00 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfillit.h"

static int	ft_valid_tetrominos(t_trominos *t, char **grid, int x, int y)
{
	int		len;

	len = 0;
	while (grid[0][len])
		len++;
	if (((y + t->p[0]) < len) &&
			((x + t->p[1]) < len) &&
			((x + t->p[1]) >= 0) &&
			((y + t->p[2]) < len) &&
			((x + t->p[3]) < len) &&
			((x + t->p[3]) >= 0) &&
			((y + t->p[4]) < len) &&
			((x + t->p[5]) < len) &&
			((x + t->p[5]) >= 0))
	{
		if ((grid[y][x] == '.') &&
				(grid[y + t->p[0]][x + t->p[1]] == '.') &&
				(grid[y + t->p[2]][x + t->p[3]] == '.') &&
				(grid[y + t->p[4]][x + t->p[5]] == '.'))
		{
			return (1);
		}
	}
	return (0);
}

static char	**ft_put_piece(t_trominos *t, char **grid, int x, int y)
{
	grid[y][x] = t->letter;
	grid[y + t->p[0]][x + t->p[1]] = t->letter;
	grid[y + t->p[2]][x + t->p[3]] = t->letter;
	grid[y + t->p[4]][x + t->p[5]] = t->letter;
	return (grid);
}

static char	**ft_put_point(t_trominos *t, char **grid, int x, int y)
{
	grid[y][x] = '.';
	grid[y + t->p[0]][x + t->p[1]] = '.';
	grid[y + t->p[2]][x + t->p[3]] = '.';
	grid[y + t->p[4]][x + t->p[5]] = '.';
	return (grid);
}

char		**ft_grid(t_trominos *begin)
{
	char		**grid;
	int			len;

	len = 0;
	grid = NULL;
	len = ft_sqrt(ft_lst_trominos_size(begin) * 4);
	while (grid == NULL)
	{
		grid = ft_free_grid(grid, len);
		grid = ft_grid_init(grid, len);
		grid = ft_backtrack(begin, grid, len);
		len++;
	}
	return (grid);
}

char		**ft_backtrack(t_trominos *piece, char **grid, int len)
{
	int				pos[2];

	pos[0] = 0;
	pos[1] = 0;
	if (!piece)
		return (grid);
	while (pos[0] < len)
	{
		while (pos[1] < len)
		{
			if (ft_valid_tetrominos(piece, grid, pos[1], pos[0]))
			{
				grid = ft_put_piece(piece, grid, pos[1], pos[0]);
				if (ft_backtrack(piece->next, grid, len) != NULL)
					return (grid);
				grid = ft_put_point(piece, grid, pos[1], pos[0]);
			}
			pos[1]++;
		}
		pos[1] = 0;
		pos[0]++;
	}
	return (NULL);
}
