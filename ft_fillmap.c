/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:02:55 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/29 21:13:58 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		*ft_checkfill(t_list tlist, char *map, int mlen)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tlist->tab)
	{
		if (tlist->tab[j] != '.' && map[i] != '.')
			return (0);
		j++;
		i++;
	}
	return (1);
}


char	*ft_fillmap(t_list tlist, char *map, int mlen)
{
	char	*tminos;
	int		i;
	int		j;
	int		nbp;
	int		save;
	int		nbsave;

	tminos = tlist->tab;
	i = 0;
	while (tminos)
	{
		if (map[i] == '.')
		{
			j = 0;
			nbp = 0;
			savei = i;
			savej = j;
			while (tminos[j] != '.')
			{
				nbp++;
				j++;
			}
			while (nbp > 0 && map[i] == '.')
			{
				nbp--;
			}
			if (nbp == 0)
			{
				while (map[save] == '.' && )
				{
					map[save] = tminos[j]
					j++;
				}
			}
			
		}
		i++;
	}
	return (map);	
}
