/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:10:59 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:11:02 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*target;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start])
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	while (end > start)
	{
		if (!ft_strchr(set, s1[end]))
			break ;
		end--;
	}
	target = (char *)ft_calloc((end - start + 2), sizeof(char));
	if (target)
		ft_strlcpy(target, s1 + start, (end - start + 2));
	return (target);
}
