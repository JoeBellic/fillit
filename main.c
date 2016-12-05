/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:41:14 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/05 20:54:07 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		result;
	t_list	*listt;
	char	*map;
	int		i;
	int		nbt;
	t_list	*save;

	i = 0;
	result = ft_check(argv);
	listt = ft_stockt(argv);
	if (result == 0 || argc != 2 || ft_nbtminos(listt) > 26)
	{
		write(1, "error\n", 6);
		return (0);
	}
	result = ft_tabt(listt);
	result = 8;
	nbt = ft_nbtminos(listt);
	map = ft_makemap(result);
	save = listt;
	ft_resolver(save, map, result, nbt, i);
	return (0);
}
