/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtelek <mtelek@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:27:21 by mtelek            #+#    #+#             */
/*   Updated: 2024/03/30 20:27:25 by mtelek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int		i;
	void	*str;

	str = (void *)ULONG_MAX;
	i = ft_printf("%p", str);
	ft_printf("|\n%d\n", i);
	i = 0;
	i = printf("%p", str);
	printf("|\n%d\n", i);
}

	//char    *str = NULL;
	// ft_result = ft_printf(NULL);
	// result = printf(NULL);
	// printf("ft_result: %d\n", ft_result);
	// printf("result: %d\n", result);