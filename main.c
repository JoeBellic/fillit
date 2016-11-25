/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 18:41:14 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/25 20:01:33 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char **argv);

int		main(int argc, char **argv)
{
	argc = 0;
	if (ft_check(argv) == 0)
	{
		write(1, "error\n", 6);
		return (0);
	}
	if (ft_check(argv) == 1)
		write(1, "correct\n", 8);
	return (0);
}
