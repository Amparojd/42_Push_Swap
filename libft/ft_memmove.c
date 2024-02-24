/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:09:01 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:09:06 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	cont;

	if (!dest && !src)
		return (NULL);
	cont = -1;
	if (dest > src)
		ft_memcpy(dest, src, n);
	else
		while (cont++ + 1 < n)
			*(char *)(dest + cont) = *(char *)(src + cont);
	return (dest);
}
