/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:10:15 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:10:18 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_count;
	size_t	dst_len;
	size_t	src_len;

	src_count = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	while (src[src_count] && dst_len + src_count < size - 1)
	{
		dst[dst_len + src_count] = src[src_count];
		src_count++;
	}
	dst[dst_len + src_count] = '\0';
	return (dst_len + src_len);
}
