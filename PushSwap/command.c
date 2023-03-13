/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:10:12 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 13:01:50 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dlist_free(t_dblist **list)
{
	struct s_node	*tmp;
	struct s_node	*del;

	if (*list != NULL)
	{
		tmp = (*list)->head;
		while (tmp != NULL)
		{
			del = tmp;
			tmp = tmp->next;
			free(del);
		}
		free(*list);
		*list = NULL;
	}
}

/* 
int main(void)
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
