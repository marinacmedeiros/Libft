/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:43:55 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/20 19:09:18 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	unsigned char	*cstr;

	i = 0;
	cstr = (unsigned char *)str;
	while (i < len)
	{
		cstr[i] = c;
		i++;
	}
	return (str);
}
