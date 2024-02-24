/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heuristics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:25:34 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 19:15:57 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

static void	calc_cost_b(t_stack **b, int size_b)
{
	t_stack	*aux_b;

	aux_b = *b;
	while (aux_b)
	{
		if ((aux_b->pos + 1) <= size_b / 2 + 1)
			aux_b->cost_b = aux_b->pos;
		else
			aux_b->cost_b = aux_b->pos - size_b;
		aux_b = aux_b->next;
	}
}

static void	calc_cost_a(t_stack **b, int size_a)
{
	t_stack	*aux_b;

	aux_b = *b;
	while (aux_b)
	{
		if ((aux_b->target_pos + 1) <= size_a / 2 + 1)
			aux_b->cost_a = aux_b->target_pos;
		else
			aux_b->cost_a = aux_b->target_pos - size_a;
		aux_b = aux_b->next;
	}
}

void	assign_costs(t_stack **b, int size_a, int size_b)
{
	calc_cost_b(b, size_b);
	calc_cost_a(b, size_a);
}

int	absv(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}
