/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletetetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:04:12 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/06 19:54:55 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_deletetetri(t_list *list, char *map)
{
	int	j;
	int	save;
	int	l;

	j = 0;
	save = j;
	l = list->tab[0];
	if (list->next)
	{
		if (list->tab[0] != 'A')
			l = list->tab[0] - 1;
		while (map[j])
		{
			if (map[j] == list->tab[0] && save == 0)
				save = j;
			if (map[j] == list->tab[0])
				map[j] = '.';
			j++;
		}
	}
}
