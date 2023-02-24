/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:05:46 by rakhsas           #+#    #+#             */
/*   Updated: 2023/02/22 16:26:48 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_lstadd_back(t_main **lst, t_main *new)
{
	t_main	*nt;

	if (*lst == NULL)
		*lst = new;
	else
	{
		nt = *lst;
		while (nt->next != NULL)
			nt = nt->next;
		nt->next = new;
	}
}

t_main	*ft_lstnew(char **ac, void *content)
{
	t_main	*list;

	list = (t_main *)malloc(sizeof(t_main));
	if (list == 0)
		return (NULL);
	list->content = content;
	list->cmd = ac;
	list->next = NULL;
	return (list);
}
