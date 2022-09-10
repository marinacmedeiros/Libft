/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:16:37 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 16:17:44 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
		i += 32;
	return (i);
}

int	main(void)
{
	int	a, b, c, d;

	a = 'A';
	b = 'B';
	c = 'c';
	d = 'd';

	printf("conversão:%c\n", ft_tolower(a));
	printf("conversão:%c\n", ft_tolower(b));
	printf("conversão:%c\n", ft_tolower(c));
	printf("conversão:%c\n", ft_tolower(d));
}