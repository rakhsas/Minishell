/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:14:17 by rakhsas           #+#    #+#             */
/*   Updated: 2023/03/09 19:38:15 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"
#include "signal.h"
#include "string.h"
#include "errno.h"
#include "../libft/libft.h"
typedef struct s_main
{
	char	*cmd;
	char	**values;
	int		new_line;
	struct s_main	*next;
}	t_main;

void	ft_print_error(char *str);
// char	**ft_split(char const *s, char c);
// t_main	*ft_lstnew(char **ac, void *content);
// void	ft_lstadd_back(t_main **lst, t_main *new);
/* ******************* STRINGS ************************** */
/* ******************* END OF STRINGS ******************* */
void	ft_putstr(char *str);
// int	ft_strlen(char *str);
/* ******************* BUILTINS ************************** */
void	ft_pwd();
void	ft_cd(char *path);
void	ft_echo(t_main *data, int ac, char **av);
int	ft_strcmp(const char *s1, const char *s2);
/* ******************* END OF BUILTINS ******************* */
#endif