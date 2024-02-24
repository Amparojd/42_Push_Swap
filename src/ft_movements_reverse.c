/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movements_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:50:04 by amorilla          #+#    #+#             */
/*   Updated: 2024/02/23 18:25:59 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	reverserot(t_stack **stack, char option)
{
	t_stack	*last;
	t_stack	*aux;
	t_stack	*prelast;

	prelast = (*stack);
	last = (*stack)->next;
	if (last != NULL)
	{
		while (last->next)
			last = last->next;
		while (prelast->next->next)
			prelast = prelast->next;
		aux = (*stack);
		(*stack) = last;
		last->next = aux;
		prelast->next = NULL;
		if (option == 'a')
			write(1, "rra\n", 4);
		if (option == 'b')
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	reverserot(a, 'x');
	reverserot(b, 'x');
	write(1, "rrr\n", 4);
}
