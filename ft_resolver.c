/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 12:10:10 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/06 16:11:02 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_resolver(t_list *list, char *map, int mlen, int nbt, int i)
{
	while (++i < ((mlen * mlen) + mlen + 1))
	{
		if (ft_fillmap(list, map, mlen, i) == 1)
		{
			if (((list->tab[0] - 'A') + 1) < nbt)
				ft_resolver(list->next, map , mlen, nbt , -1);
			else
				ft_printmap(map);
			ft_deletetetri(list, map);
		}
	}
}
