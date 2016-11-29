/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:41:14 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/29 21:14:03 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int		result;
	t_list	listt;

	result = ft_check(argv);
	listt = ft_stockt(argv);
	if (result == 0 || argc != 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	result = ft_tabt(listt);
	ft_fillmap(llist, ft_makemap(result), result);
	return (0);
}
