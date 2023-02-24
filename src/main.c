/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rakhsas <rakhsas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:26:50 by rakhsas           #+#    #+#             */
/*   Updated: 2023/02/23 11:35:33 by rakhsas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	handle_signal(int signal)
{
	if (signal >= 1)
	{
		printf("SIGALE RECIEVED %d\n", signal);
		exit(0);
	}
}

int main()
{
	signal(SIGQUIT, handle_signal);
	signal(SIGINT, handle_signal);
	while(1);
// 	char buffer[100];

//   // Read input from stdin until EOF is reached
//   while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
//     printf("You entered: %s", buffer);
//   }

//   printf("End of input reached.\n");

}
