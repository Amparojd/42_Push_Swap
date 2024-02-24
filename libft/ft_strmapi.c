/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:10:31 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:10:34 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*target;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	target = (char *)ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!target)
		return (NULL);
	i = 0;
	while (s[i])
	{
		target[i] = f(i, s[i]);
		i++;
	}
	target[i] = '\0';
	return (target);
}
