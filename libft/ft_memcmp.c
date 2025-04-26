/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:17:07 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:36:53 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_c;
	const unsigned char	*s2_c;
	size_t				i;

	s1_c = (const unsigned char *)s1;
	s2_c = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	return (0);
}
/*
int main() {
   char buffer[10] = "ciah";
   char dest[10] = "ciao";
   int	i;
   
   i = 0;
   printf("my_result: %d\n", ft_memcmp(buffer, dest, 4));
   printf("lib_result: %d\n", memcmp(buffer, dest, 4));
   return 0;
}
*/
