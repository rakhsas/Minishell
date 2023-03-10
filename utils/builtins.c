/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:26:19 by rakhsas           #+#    #+#             */
/*   Updated: 2023/03/10 12:00:49 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_pwd(void)
{
	char	cwd[1025];

	ft_putstr(getcwd(cwd, sizeof(cwd)));
}

void	ft_cd(char *path)
{
	int	j;

	j = 0;
	if (path[0] == '/')
		path = path+1;
	if (chdir(path) == -1)
	{
		ft_putstr("bash: cd: ");
		ft_putstr(path);
		ft_putstr(": No such file or directory");
	}
}
