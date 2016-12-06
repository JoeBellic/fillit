/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 12:10:10 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/06 20:28:42 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_resolver(t_list *list, char *map, int mlen)
{
	int	i;

	i = -1;
	while (map[++i])
	{
		if (ft_fillmap(list, map, mlen, i) == 1)
		{
			if (list->next)
				ft_resolver(list->next, map, mlen);
			else
				ft_printmap(map);
			ft_deletetetri(list, map);
		}
	}
}

void			ft_resolv(t_list *list, int result)
{
	char	buff;
	int		fd;
	char	*map;

	while (result != -1)
	{
		map = ft_makemap(result);
		ft_resolver(list, map, result);
		free(map);
		result++;
		fd = open(0, O_RDONLY);
		if (read(fd, &buff, 1) != 0)
			result = -1;
		close(fd);
	}
}
