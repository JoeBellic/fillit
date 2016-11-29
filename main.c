/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:41:14 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/29 16:13:33 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char **argv);

int		main(int argc, char **argv)
{
	int	result;

	argc = 0;
	result = ft_check(argv);
	if (result == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (result == 1)
		write(1, "correct\n", 8);
	return (0);
}
