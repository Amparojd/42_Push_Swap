/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:08:20 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 20:08:23 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*target;
	t_list	*elem;

	target = NULL;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (!elem)
			ft_lstclear(&elem, del);
		else
			ft_lstadd_back(&target, elem);
		lst = lst->next;
	}
	return (target);
}
