/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:52:28 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:38:46 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		else
			i--;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "Milvla";
	char	c = 'l';
	
	printf("%s\n", ft_strrchr(str, c));
	return 0;
}
*/
