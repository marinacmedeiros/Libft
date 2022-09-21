/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir <mamedeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:01:24 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/21 22:24:29 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc_mem;

	if (count * size == 0 || count > 2147483647 / size)
		return (0);
	alloc_mem = malloc (count * size);
	if (!alloc_mem)
		return (0);
	ft_bzero(alloc_mem, (count * size));
	return (alloc_mem);
}
