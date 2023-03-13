/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:46:56 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 16:07:11 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	t_dblist	*pilea;
	t_dblist	*pileb;

	i = 0;
	pilea = dlist_new();
	pileb = dlist_new();
	while (i < argc - 1)
		pilea = dlist_add_top(pilea, i);
	write(1, "caca\n", 5);
}

/* int main(void)
{
	t_node *a = (t_node *) malloc(sizeof(t_node));
	t_node *b = (t_node *) malloc(sizeof(t_node));

	b->value = 1;
	a->value = 4;
	printf("before\nb=%d\n", b->value);
	printf("a=%d\n", a->value);
	ft_swap_a(a, b);
	printf("after\nb=%d\n", b->value);
	printf("a=%d\n", a->value);
	return (0);
} */
