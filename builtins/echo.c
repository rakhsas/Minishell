/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:31:39 by rakhsas           #+#    #+#             */
/*   Updated: 2023/03/09 19:39:04 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_echo_next(t_main *data, int c, int j, char **av)
{
	int	i;

	i = 0;
	while (i < c)
	{
		data->values[i] = malloc(sizeof(char) * ft_strlen(av[j]) + 1);
		strcpy(data->values[i], av[j]);
		i++;
		j++;
	}
		data->values[i] = NULL;
	i = 0;
	while (data->values[i])
	{
		ft_putstr(data->values[i]);
		if (data->values[i + 1] != NULL)
			ft_putstr(" ");
		i++;
	}
	if (data->new_line == 0)
		ft_putstr("\n");
}

void	ft_echo(t_main *data, int ac, char **av)
{
	int		i;
	int		j;
	int		c;

	i = 0;
	if (ac > 2)
	{
		data->values = malloc(sizeof(char *) * ac - 3);
		if (ft_strcmp(av[2], "-n") == 0)
		{
			data->new_line = -1;
			j = 3;
		}
		else
		{
			data->new_line = 0;
			j = 2;
		}
		c = ac - j;
		ft_echo_next(data, c, j, av);
	}
}
