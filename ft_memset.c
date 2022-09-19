/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir < mamedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:43:55 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/19 19:20:36 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *str, int c, size_t len)
{
	size_t	i;
	unsigned char	*cstr;

	i = 0;
	cstr = (char *) str;
	while (i < len)
	{
		cstr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
