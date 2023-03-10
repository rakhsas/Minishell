/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:26:50 by rakhsas           #+#    #+#             */
/*   Updated: 2023/03/10 16:27:22 by rakhsas          ###   ########.fr       */
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

int main(int ac, char **av, char **env)
{
	t_main	*data;
	char *str;int i = 0;
	char	**ss;

	if (!av || !env)
		return (0);
	if (ac == 1)
	{
		while (1)
		{
			str = readline("minishell: ");
			if (!str)
				return (0);
			ss = ft_split(str, ' ');
			while (ss[i])
				i++;
			data = malloc(sizeof(t_main));
			data->cmd = ss[0];
			str_tolower(data->cmd);
			if (ft_strcmp(data->cmd, "echo") == 0)
				ft_echo(data, i, ss);
			else if (ft_strcmp(data->cmd, "pwd") == 0)
			{
				ft_pwd();
				ft_putstr("\n");
			}
			else if (ft_strcmp(data->cmd, "cd") == 0)
			{
				ft_cd(ss[2]);
				ft_putstr("\n");
			}
			// else if (ft_strcmp(data->cmd, "export") == 0)
			// {
			// 	ft_cd(ss[2]);
			// 	ft_putstr("\n");
			// }
			free(str);
			i = 0;
			while (ss[i])
			{
				free(ss[i]);
				i++;
			}
		}
	}

}

