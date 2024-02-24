/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_target_pos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:27:11 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 19:17:02 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

static	int	biggest_index(t_stack **a)
{
	t_stack	*aux_a;
	int		biggest;

	aux_a = *a;
	biggest = aux_a->idx;
	while (aux_a)
	{
		if (aux_a->idx > biggest)
			biggest = aux_a->idx;
		aux_a = aux_a->next;
	}
	return (biggest);
}

void	assign_target_pos_lower_idx(t_stack **a, t_stack **b)
{
	t_stack	*aux_a;
	int		closer_idx;
	int		target_pos;

	aux_a = *a;
	closer_idx = biggest_index(&aux_a);
	while (aux_a)
	{
		if ((*b)->idx < aux_a->idx && closer_idx > aux_a->idx)
		{
			closer_idx = aux_a->idx;
			target_pos = aux_a->pos;
		}
		aux_a = aux_a->next;
	}
	(*b)->target_pos = target_pos;
}
