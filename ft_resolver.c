/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 12:10:10 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/05 20:54:03 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_resolver(t_list *list, char *map, int mlen, int nbt, int i)
{
	while (map[++i])
	{
		if (ft_fillmap(list, map, mlen, i) == 1)
		{
			if (((list->tab[0] - 'A') + 1) < nbt)
				ft_resolver(list->next, map , mlen, nbt , -1);
			else
				ft_printmap(map);
			ft_deletetetri(list, map, mlen, nbt, i);
		}
	}
}
