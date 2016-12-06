/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeny <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 13:08:19 by nbeny             #+#    #+#             */
/*   Updated: 2016/12/06 16:07:33 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_buff
{
	int		fd;
	char	buff[21];
}				t_buff;

typedef struct	s_var
{
	int a;
	int i;
	int j;
	int k;
	int l;
}				t_var;
typedef struct	s_list
{
	char			tab[14];
	struct s_list	*next;
}				t_list;

int				ft_check(char **argv);
int				main(int argc, char **argv);
t_list			*ft_stockt(char **av);
char			*ft_makemap(int tminos);
int				ft_tabt(t_list *alist);
int				ft_fillmap(t_list *tlist, char *map, int mlen, int i);
int				ft_nbtminos(t_list *alist);
void			ft_resolver(t_list *list, char *map, int mlen, int nbt, int i);
void			ft_printmap(char *map);
void			ft_deletetetri(t_list *list, char *map);

#endif
