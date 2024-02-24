/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:27:46 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 19:17:45 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	sort_three_numbers(t_stack **a)
{
	t_stack	*first;
	t_stack	*seccond;
	t_stack	*third;

	first = *a;
	seccond = (*a)->next;
	third = (*a)->next->next;
	if (first->idx > seccond->idx && first->idx > third->idx)
		rotate(a, 'a');
	else if (first->idx < seccond->idx && seccond->idx > third->idx)
		reverserot(a, 'a');
	first = *a;
	seccond = (*a)->next;
	if (first->idx > seccond->idx)
		sa(a);
}
