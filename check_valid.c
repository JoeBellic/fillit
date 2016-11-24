/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:10:26 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/24 21:17:57 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		ft_check_valid(int fd)
{
	char	buff[21];
	int		hash;
	int		i;

	while (read(fd, buff, 21))
	{
		i = 0;
		hash = 0;
		while (i < 20)
		{
			if (buff[i] != '.' && buff[i] != '#' && buff[i] != '\n')
				return (0);
			if ((i + 1) % 5 != 0 && buff[i] == '\n')
				return (0);
			if ((i + 1) % 5 == 0 && buff[i] != '\n')
				return (0);
			if (buff[i] == '#')
				hash++;
			i++;
		}
		if (hash != 4 || buff[20] != '\n')
			return (0);
	}
	return (1);
}

int		ft_check_tminos(int fd)
{
	int		i;
	int		save;
	char	buff[21];

	while (read(fd, buff, 21))
	{
		save = 0;
		i = 0;
		while (i < 20)
		{
			if (buff[i] == '#')
			{
				save = i;
				while (buff[i++] != '\n' && buff[i])
					if (buff[i] == '.' && buff[i + 1] == '#')
						return (0);
				i = save;
			}
			if (buff[i] == '#' && (i - save) > 4)
				return (0);
			i++;
		}
	}
	return (1);
}

int		ft_check_tminosbis(int fd)
{
	int		i;
	char	buff[21];
	int		connect;
	int		hash;

	while (read(fd, buff, 21))
	{
		hash = 0;
		i = -1;
		while (i++ < 20 && hash < 4)
		{
			connect = 0;
			while (buff[i] != '\n')
			{
				if (buff[i] == '#')
					hash++;
				if (buff[i] == '#' && buff[i + 5] == '#')
					connect = 1;
				i++;
			}
			if (connect == 0 && hash != 0 && hash != 4)
				return (0);
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buff[2000];

	i = 0;
	argc = 1;
	fd = open(argv[argc], O_RDONLY);
	while (read(fd, buff, 2000))
		printf("%s\n", buff);
	while (buff[i] != '\0')
		i++;
	printf("%c\n", buff[i - 2]);
	if (buff[i - 1] != '\n' || (buff[i - 2] != '#' && buff[i - 2] != '.'))
		return (0);
	fd = open(argv[argc], O_RDONLY);
	printf("%d\n", ft_check_valid(fd));
	fd = open(argv[argc], O_RDONLY);
	printf("%d\n", ft_check_tminos(fd));
	fd = open(argv[argc], O_RDONLY);
	printf("%d\n", ft_check_tminosbis(fd));
	close(fd);
	return (0);
}
