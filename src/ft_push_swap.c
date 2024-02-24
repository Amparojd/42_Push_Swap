/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:26:55 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/24 11:17:59 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_leaks(void)
{
 	system("leaks -q push_swap");
}


int	main(int argc, char **argv)
{
	int		size;
	t_stack	*a;
	t_stack	*b;


	a = NULL;
	b = NULL;
	size = 0;	
	if (argc > 1)
	{
		if (argc < 2)
			print_error();
		a = process(argc, argv, &size);
		if (!a || checkdup(a))
		{
			freestack(&a);
			print_error();
		}
		if (!checksorted(a))
			sort_stacks(&a, &b, size);
		freestacks(&a, &b);
	}

	atexit(ft_leaks);
	exit(EXIT_SUCCESS);
}
