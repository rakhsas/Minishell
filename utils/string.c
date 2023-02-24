/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:28:02 by rakhsas           #+#    #+#             */
/*   Updated: 2023/02/23 10:37:48 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	print_str(char *str)
{
	int	i;

	i = 0;
	while (i[str])
	{
		write(1, &str[i], 1);
		i++;
	}
}