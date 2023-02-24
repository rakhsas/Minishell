/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:14:17 by rakhsas           #+#    #+#             */
/*   Updated: 2023/02/23 10:45:42 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "signal.h"

typedef struct s_main
{
	char	**cmd;
	char	*content;
	struct s_main	*next;
}	t_main;

void	ft_print_error(char *str);
char	**ft_split(char const *s, char c);
t_main	*ft_lstnew(char **ac, void *content);
void	ft_lstadd_back(t_main **lst, t_main *new);
/* ******************* STRINGS ************************** */
void	print_str(char *str);
/* ******************* END OF STRINGS ******************* */

/* ******************* BUILTINS ************************** */
void	ft_pwd();
/* ******************* END OF BUILTINS ******************* */
#endif