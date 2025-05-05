/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:21:24 by elmondo           #+#    #+#             */
/*   Updated: 2025/05/05 10:36:57 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk_bonus.h"

void	confirm_msg(int signal)
{
	if (signal == SIGUSR2)
		ft_printf("message recieved\n");
}

void	ft_atob(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(350);
		bit++;
	}
	usleep(350);
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	pid = ft_atoi(argv[1]);
	if (pid < 0 || argc != 3)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		signal(SIGUSR2, confirm_msg);
		while (argv[2][i] != '\0')
		{
			ft_atob(pid, argv[2][i]);
			i++;
		}
		ft_atob(pid, '\0');
		usleep(350);
	}
}
