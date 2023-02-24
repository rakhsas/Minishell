/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:26:19 by rakhsas           #+#    #+#             */
/*   Updated: 2023/02/23 10:48:45 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_pwd(void)
{
	char	cwd[1025];

	print_str(getcwd(cwd, sizeof(cwd)));
}

void	ft_echo(char *str, char arg)
{
	print_str(str);
	arg = 'c';
}
