/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:46:56 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:37:41 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char *str;
 	char *tmp = "I malloc so I am.";
 
 	str = ft_strdup(tmp);
 	printf("str: %s\n", str);
 	if (strcmp(str, tmp))
 	{
 		printf("TEST_FAILED");
 		return 0;
 	}
 	free(str);
 	printf("TEST_SUCCESS");
	return 0;
}
*/
