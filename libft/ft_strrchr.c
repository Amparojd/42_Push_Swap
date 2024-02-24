/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:10:53 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:10:56 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*res;
	char		ccc;
	size_t		i;

	i = 0;
	ccc = (char)c;
	res = NULL;
	while (str[i])
	{
		if (str[i] == ccc)
			res = &str[i];
		i++;
	}
	if (str[i] == ccc)
		res = &str[i];
	return ((char *)res);
}
