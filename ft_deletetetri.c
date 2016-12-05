/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletetetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:04:12 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/05 20:54:05 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_deletetetri(t_list *list, char *map, int mlen, int nbt, int i)
{
	int		j;
	int		save;
	int		l;

	j = 0;
	save = j;
	l = list->tab[0];
	if (list->tab[0] != 'A')
		l = list->tab[0] - 1;
	while (map[j])
	{
		if (map[j] == list->tab[0]  && save == 0)
			save = j;
		if (map[j] == list->tab[0])
			map[j] = '.';
		j++;
	}
	i = save;
	ft_resolver(list, map, mlen, nbt, i);	
}
