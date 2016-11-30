/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:02:55 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/30 18:44:33 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_pointc(char *str, int mlen)
{
	int	point;

	point = 0;
	while (str[point] == '.')
		point++;
	if (point == 2)
		point = mlen - 1;
	if (point == 3)
		point = mlen - 
	else
		point = mlen - 1;
	return (point);

}

int		ft_fillmapcheck(t_list *tlist, char *map, int mlen)
{
	int		i;
	int		j;
	int		jump;
	char	*tminos;

	i = 0;
	j = 0;
	tminos = tlist->tab;
	while (tminos[j])
	{
		jump = 0;
		if (tminos[j] != '.' && (map[i] != '.' && map[i] != '\n'))
			return (0);
		if (map[i] != '\n')
			j++;
		if (tminos[j] == '.')
		{
			jump = ft_pointc(&tminos[j], mlen);
			while (tminos[j] == '.')
				j++;
			i = (i - 1) + jump;
		}
		i++;
	}
	return (1);
}

char	*ft_fillmap(t_list *tlist, char *map, int mlen)
{
	int		i;
	int		j;
	char	*tminos;
	
	i = 0;
	j = 0;
	tminos = tlist->tab;
	printf("%s\n", tminos);
	printf("%s\n", map);
	while (map[i])
	{
	//	if ((ft_fillmapcheck(tlist, map, mlen)) == 1)
	//	{
			while (tminos[j])
			{
				if (map[i] == '\n')
					i++;
				if (tminos[j] != '.')
				{
					map[i] = tminos[j];
				}
				if (tminos[j] == '.')
					i = (i) + ft_pointc(&tminos[j], mlen);
				i++;
				j++;
			}
	//	}
		i++;
	}
	printf("%s\n", map);
	return (map);
}


/*
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
*/


