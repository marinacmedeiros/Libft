/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:46:44 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 19:11:46 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int i)
{
	if ((i >= '0' && i <= '9') || (i >= 'A' && i <= 'Z')
		|| (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}

int	main(void)
{
	int	a, b, c, d, e, f, g, h;
	
	a = '7';
	b = '3';
	c = 'X';
	d = 'z';
	e = '-8';
	f = '*';
	g = '-544';
	h = -871;
	
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	//printf("%d\n", ft_isalnum(e));
	printf("%d\n", ft_isalnum(f));
	printf("%d\n", ft_isalnum(g));
	printf("%d\n", ft_isalnum(h));
}