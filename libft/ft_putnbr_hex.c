/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:12:54 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:37:18 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_hex(unsigned long nbr, char c)
{
	char	*set_lo;
	char	*set_up;
	int		i;

	i = 0;
	set_lo = "0123456789abcdef";
	set_up = "0123456789ABCDEF";
	if (c == 'x')
	{
		if (nbr >= 16)
			i += ft_putnbr_hex((nbr / 16), 'x');
		i += ft_putchar(set_lo[nbr % 16]);
	}
	else if (c == 'X')
	{
		if (nbr >= 16)
			i += ft_putnbr_hex((nbr / 16), 'X');
		i += ft_putchar(set_up[nbr % 16]);
	}
	return (i);
}
/*
int	main()
{
	int i = ft_putnbr_hex(LONG_MIN);
	//int h = printf("\n%x\n", LONG_MIN);
	ft_putchar('\n');
	ft_putnbr(i);
	//ft_putnbr(h);
	ft_putchar('\n');
	return 0;
}
*/