/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:45:26 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 12:47:31 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_node *a, t_node *b)
{
	int	tmp;

	tmp = a->value;
	a->value = b->value;
	b->value = tmp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_node *a, t_node *b)
{
	int	tmp;

	tmp = a->value;
	a->value = b->value;
	b->value = tmp;
	write(1, "sb\n", 3);
}
