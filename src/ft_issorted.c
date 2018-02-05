/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjauzion <jjauzion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 13:43:10 by jjauzion          #+#    #+#             */
/*   Updated: 2018/02/05 11:55:23 by jjauzion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_issorted(t_stack s, int start_i, int end_i)
{
	int		i;

	i = end_i;
	while (i > start_i)
	{
		if (s.data[i - 1] < s.data[i])
			return (0);
		i--;
	}
	return (1);
}
