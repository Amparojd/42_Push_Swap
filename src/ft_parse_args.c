/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ampjimen <ampjimen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:26:35 by ampjimen          #+#    #+#             */
/*   Updated: 2024/02/23 19:16:17 by ampjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\f'
		|| c == '\v' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi2(const char *str)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			mod = -1;
		str++;
	}
	if (!*str)
		print_error();
	while (*str)
	{
		if (!ft_isdigit(*str))
			print_error();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		print_error();
	return (mod * i);
}

t_stack	*process(int argc, char **argv, int *size)
{
	t_stack	*a;
	int		i;
	int		j;
	char	**tmp;

	i = 1;
	a = NULL;
	while (argc > i)
	{
		if (argv[i][0] == '\0')
			return (freestack(&a), print_error(), NULL);
		j = 0;
		tmp = ft_split(argv[i], ' ');
		if (!tmp)
			return (freestack(&a), print_error(), NULL);
		while (tmp[j])
		{
			add_back(&a, stack_new(ft_atoi2(tmp[j++])));
			*size += 1;
		}
		freestr(tmp);
		free(tmp);
		i++;
	}
	return (a);
}
