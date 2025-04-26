/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:32:14 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:38:51 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
int	main()
{
	char *s = "tripouille";
 	//size_t size = strlen(s);
 	char *ret = ft_substr("tripouille", 0, 42000);
 	if (!strcmp(s, ret))
	{
 		printf("TEST_SUCCESS");
 		return 0;
 	}
 	free(ret);
 	printf("TEST_FAILED");
 	return(0);
}
*/
