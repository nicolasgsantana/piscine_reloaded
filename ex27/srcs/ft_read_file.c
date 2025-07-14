/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:32:35 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/14 13:09:56 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "../includes/ft_putstr.h"

int	ft_open_file(char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	return (fd);
}

void	ft_printfile(char *file_name)
{
	char	c;
	int		fd;

	fd = ft_open_file(file_name);
	while (read(fd, &c, 1) > 0)
		ft_putchar(c);
	close(fd);
}
