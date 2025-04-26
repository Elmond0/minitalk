/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmondo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:39:14 by elmondo           #+#    #+#             */
/*   Updated: 2025/04/13 16:40:18 by elmondo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*read_line(char *saved, int fd)
{
	int		i;
	char	*temp;

	temp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	temp = ft_memset(temp, 0, (BUFFER_SIZE + 1));
	i = 1;
	while (!ft_strchr(temp, '\n') && i > 0)
	{
		i = read(fd, temp, BUFFER_SIZE);
		if (i < 0)
			return (free(temp), NULL);
		temp[i] = '\0';
		if (!saved)
			saved = ft_strdup(temp);
		else
			saved = ft_get_strjoin(saved, temp);
		if (!saved)
			return (NULL);
	}
	if (i == 0 && (!saved || saved[0] == '\0'))
		return (free(saved), free(temp), NULL);
	free(temp);
	return (saved);
}
