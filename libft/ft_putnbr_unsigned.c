/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:23:56 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:37:20 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int	i;

	i = 0;
	if (nbr >= 10)
		i += ft_putnbr_unsigned(nbr / 10);
	nbr = (nbr % 10) + 48;
	i += ft_putchar(nbr);
	return (i);
}
/*
int	main()
{
	unsigned int i = ft_putnbr_unsigned(0);
	ft_putchar('\n');
	ft_putnbr(i);
	return 0;
}
*/