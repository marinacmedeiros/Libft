/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:29:35 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/12 19:34:15 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n > i + 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main()
{
    char a[] = "Armatrong";
    char b[] = "Armzjj";

    printf("%d\n", ft_strncmp(a, b, 4));
    return (0);*/
}
