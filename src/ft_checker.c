/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 16:15:29 by jjauzion          #+#    #+#             */
/*   Updated: 2018/01/30 18:49:40 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_init_stack(t_stack *s, char **argv, int size)
{
	if (!(s->data = (int*)malloc(sizeof(int) * (size))))
		return (1);
	s->top = -1;
	while (++(s->top) < size)
		s->data[s->top] = ft_atoi(argv[s->top + 1]);
	s->top--;
	return (0);
}

static void	ft_display_stack(t_stack s)
{
	while (s.top >= 0)
	{
		ft_printf("%d: |%5d|\n", s.top, s.data[s.top]);
		s.top--;
	}
}

static int	ft_check_input(char **argv, int size)
{
	while (size)
	{
		if (!ft_str_itercheck(argv[size], &ft_isdigit))
			return (1);
		size--;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	t_stack		a;

	if (argc <= 1)
	{
		ft_printf("Usage : At least to integer argument required\n");
		return (1);
	}
	if (ft_check_input(argv, argc - 1))
	{
		ft_putendl("Error");
		return (1);
	}
	if (ft_init_stack(&a, argv, argc - 1))
		return (1);
	ft_display_stack(a);
	return (0);
}
