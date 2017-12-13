/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <anaroste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:16:48 by tbleuse           #+#    #+#             */
/*   Updated: 2017/12/10 16:49:39 by tbleuse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "libfillit.h"

char	*ft_read(char *file)
{
	int			fd;
	int			ret;
	char		buf[550];
	char		*list;
	int			i;

	list = ft_memalloc(550);
	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (NULL);
	}
	ret = read(fd, buf, 550);
	buf[ret] = '\0';
	while (buf[i])
	{
		list[i] = buf[i];
		i++;
	}
	return (list);
}
