/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:27:15 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:36:07 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
/*
int	main(void)
{
	int	*array;
	int	i;
	
	i = 0;	
	array = (int *)ft_calloc(5, sizeof(int));
	
	if(!array)
		return (0);
	
	while(i < 5)
	{
		printf("%d, ", array[i]);
		i++;
	}
	return (0);
}
*/
