/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:50:15 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/23 20:13:13 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		p;
	int		l;
	char	*dst;

	l = 0;
	while (s[l] != '\0')
		l++;
	dst = (char *)malloc(sizeof(char) * (l + 1));
	p = 0;
	while (p < l)
	{
		dst[p] = s[p];
		p++;
	}
	dst[p] = '\0';
	return (dst);
}
//p - position
//l - lenght
