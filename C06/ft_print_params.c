/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:38:54 by fmontini          #+#    #+#             */
/*   Updated: 2024/10/07 17:11:44 by fmontini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	c = 1;
	while (c < argc)
	{
		i = 0;
		while (argv[c][i] != '\0')
		{
			write (1, &argv[c][i], 1);
			i++;
		}
		write (1, "\n", 1);
		c++;
	}
	return (0);
}