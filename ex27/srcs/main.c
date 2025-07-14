/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nde-sant <nde-sant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:28:04 by nde-sant          #+#    #+#             */
/*   Updated: 2025/07/14 13:07:55 by nde-sant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_putstr.h"
#include "../includes/ft_read_file.h"

int	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putstrnl("Too many arguments.");
	else if (argc < 2)
		ft_putstrnl("File name missing.");
	else
		ft_printfile(argv[1]);
	return (0);
}
