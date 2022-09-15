/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:28:20 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/15 14:22:27 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(src);
	b = 0;
	if (size == 0)
		return (*dst);
	while (src[b] != '\0' && b < (size - 1))
	{
		dst[b] = src[b];
		b++;
	}
	dst[b] = '\0';
	return (a);
}
