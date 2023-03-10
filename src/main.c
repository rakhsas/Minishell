/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:26:50 by rakhsas           #+#    #+#             */
/*   Updated: 2023/03/10 12:03:29 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}



void str_tolower(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		i[str] = ft_tolower(i[str]);
		i++;
	}
}

int main(int ac, char **av)
{
	t_main	*data;

	data = malloc(sizeof(t_main));
	data->cmd = av[1];
	str_tolower(data->cmd);

	if (ft_strcmp(data->cmd, "echo") == 0)
		ft_echo(data, ac, av);
	else if (ft_strcmp(data->cmd, "pwd") == 0)
	{
		ft_pwd();
		ft_putstr("\n");
	}
	else if (ft_strcmp(data->cmd, "cd") == 0)
	{
		ft_cd(av[2]);
		ft_putstr("\n");
	}
	else if (ft_strcmp(data->cmd, "export") == 0)
	{
		ft_cd(av[2]);
		ft_putstr("\n");
	}
}

