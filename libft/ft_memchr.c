/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:08:41 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:08:44 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t len)
{
	unsigned char	*ret;

	ret = (unsigned char *)ptr;
	while (len--)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		else
			ret++;
	}
	return (0);
}
