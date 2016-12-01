/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:41:14 by kbagot            #+#    #+#             */
/*   Updated: 2016/12/01 21:09:35 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		result;
	t_list	*listt;
	char	*map;

	result = ft_check(argv);
	if (result == 0 || argc != 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	listt = ft_stockt(argv);
	result = 5;
	map = ft_makemap(result);
	while (listt)
	{
		map = ft_fillmap(listt, map, result);
		listt = listt->next;
	}
	printf("%s\n", map);
	return (0);
}
