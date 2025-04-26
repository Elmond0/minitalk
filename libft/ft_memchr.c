/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:27:24 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:35:50 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	size_t				i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main() {
   char *src = "/|\x12\xff\x09\x42\2002\42|\\";
 	int size = 10;
 
 	if (memchr(src, '\200', size) == ft_memchr(src, '\200', size))
 	{
 		printf("TEST_SUCCESS");
 		return 0;
 	}
 	printf("TEST_FAILED");
 	return 0;
}
*/
