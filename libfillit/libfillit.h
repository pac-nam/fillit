/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfillit.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <anaroste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 12:26:36 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/06 12:39:46 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFILLIT_H
# define LIBFILLIT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_trominos
{
	int					*p;
	char				letter;
	struct s_trominos	*next;
}						t_trominos;

char					*ft_read(char *file);
char					**ft_grid(t_trominos *begin);
char					**ft_grid_init(char **grid, int len);
char					**ft_free_grid(char **grid, int len);
char					**ft_backtrack(t_trominos *begin,
							char **grid, int len);
void					ft_print(char **grid);

int						*ft_fill_int_tab(int one, int two, int three);
int						*ft_verif_tetrominos(char *str);
int						*ft_verif_second_both(char *str, int i);
int						*ft_verif_second_right(char *str, int i);
int						*ft_verif_second_down(char *str, int i);
int						*ft_verif_third_right_right(char *str, int i);
int						*ft_verif_third_right_down(char *str, int i);
int						*ft_verif_third_down_left(char *str, int i);
int						*ft_verif_third_down_right(char *str, int i);
int						*ft_verif_third_down_down(char *str, int i);
int						ft_verif_nl(int ref, char *str);
int						*ft_special_a(void);
int						*ft_special_d(void);
int						*ft_special_h(void);
int						*ft_special_l(void);
int						*ft_special_n(void);
int						*ft_special_o(void);

t_trominos				*ft_create_lst(int *tab, int c, t_trominos *begin_list);
void					ft_tetrominos_rev(t_trominos **begin);
int						ft_lst_trominos_size(t_trominos *list);

void					ft_putstr(const char *str);
void					ft_putendl(char const *s);
int						ft_sqrt(int nb);
size_t					ft_strlen(const char *str);
void					*ft_memalloc(size_t size);

#endif
