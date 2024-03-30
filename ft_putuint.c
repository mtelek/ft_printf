/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:27:31 by mtelek            #+#    #+#             */
/*   Updated: 2024/03/30 20:27:33 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int c)
{
	char	buffer[11];
	int		length;
	int		i;

	length = 0;
	if (c == 0)
	{
		ft_printchar('0');
		return (1);
	}
	while (c > 0)
	{
		buffer[length++] = '0' + (c % 10);
		c /= 10;
	}
	i = length - 1;
	while (i >= 0)
	{
		ft_printchar(buffer[i]);
		i--;
	}
	return (length);
}
