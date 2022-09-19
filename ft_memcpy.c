/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamedeir < mamedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:38:19 by mamedeir          #+#    #+#             */
/*   Updated: 2022/09/19 17:38:19 by mamedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, const void *src, size_t n)
{
  size_t  i;

  i = 0;
  if (!dst && !src)
    return (0);
  while (i < n)
  {
    ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
  }
  return (dst)
}