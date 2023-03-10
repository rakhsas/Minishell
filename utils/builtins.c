/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:26:19 by rakhsas           #+#    #+#             */
/*   Updated: 2023/03/10 16:24:55 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_pwd(void)
{
	char	cwd[1025];

	ft_putstr(getcwd(cwd, sizeof(cwd)));
}

char	*cd_home(char *path)
{
	path = getenv("HOME=");
	if (path == NULL)
	{
		write(2, "minishell: cd: HOME not set\n", 28);
	}
	else
		path = getenv("HOME");
	return (path);
}

void	ft_cd(char *path)
{
	if (!path || path[0] == '~' || ft_strlen(path) == 1)
		path = cd_home(path);
}
