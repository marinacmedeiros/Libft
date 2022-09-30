/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:33:40 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/30 18:57:49 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(char *s, char c)
{
	int		times;
	size_t	i;

	i = 0;
	times = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			times++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		times++;
	return (times);
}

static size_t	ft_len(char *s, char c, size_t start)
{
	size_t	len;
	size_t	end;

	len = 0;
	end = 0;
	if (ft_strchr(&s[start], c))
	{
		len = ft_strlen(ft_strchr(&s[start], c));
	}
	else
	{
		len = ft_strlen(&s[start]);
	}
	end = ft_strlen(s) - len - start;
	if (!end)
	{
		end = ft_strlen(&s[start]);
	}
	return (end);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	start;
	size_t	end;
	size_t	index;

	tab = (char **)malloc((ft_size((char *)s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	start = 0;
	index = 0;
	while (s[start])
	{
		if (s[start] != c)
		{
			end = ft_len((char *)s, c, start);
			tab[index] = ft_substr(s, start, end);
			index++;
			start += end;
		}
		else
			start++;
	}
	tab[index] = NULL;
	return (tab);
}
