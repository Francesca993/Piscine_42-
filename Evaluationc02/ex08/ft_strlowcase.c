/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelici <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:06:16 by sfelici           #+#    #+#             */
/*   Updated: 2024/09/24 18:17:06 by sfelici          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*d;

	d = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (d);
}