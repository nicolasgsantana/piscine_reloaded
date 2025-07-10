/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 12:45:44 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/10 13:01:32 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	n;
	int	i;

	array = malloc((max - min) * sizeof(int));
	n = min;
	i = 0;
	while (n < max)
		array[i++] = n++;
	return (array);
}
