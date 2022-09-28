/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:10:30 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/28 17:47:00 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	long int	i;
	int			size;

	i = n;
	size = ft_count(i);
	ptr = (char *)malloc(size + 1);
	if (!ptr)
		return (NULL);
	ptr[size--] = '\0';
	if (i == 0)
		ptr[0] = 48;
	if (i < 0)
	{
		i = -i;
		ptr[0] = '-';
	}
	while (i > 0)
	{
		ptr[size--] = i % 10 + '0';
		i -= i % 10;
		i = i / 10;
	}
	return (ptr);
}
