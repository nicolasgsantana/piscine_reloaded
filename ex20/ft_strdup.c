/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:29:48 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/10 12:42:27 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = malloc(ft_strlen + 1 * sizeof(char));
	i = 0;
	while (src != '\0')
		str[i] = src[i++];
	str[i] = '\0';
	return (str);
}
