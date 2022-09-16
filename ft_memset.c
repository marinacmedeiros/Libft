/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:43:55 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/16 16:32:53 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *str, int c, size_t len)
{
	size_t	i;
	char	cstr;

	i = 0;
	cstr = (char *) str;
	while (i < len)
	{
		cstr[i] = c;
		i++;
	}
	return (str);
}
