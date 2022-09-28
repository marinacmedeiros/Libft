/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:39:32 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/28 16:01:33 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	result = (char *) malloc ((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		result[i] = (s1)[i];
		i++;
	}	
	i = 0;
	while (i < ft_strlen(s2))
	{
		result[ft_strlen(s1) + i] = (s2)[i];
		i++;
	}
	result[len] = '\0';
	return (result);
}
