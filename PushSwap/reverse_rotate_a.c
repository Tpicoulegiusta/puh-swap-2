/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:01:25 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/14 14:54:57 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*dlist_add_top(t_dblist *list, int value)
{
	struct s_node	*new;

	if (list != NULL)
	{
		new = malloc(sizeof * new);
		if (new != NULL)
		{
			new->value = 0;
			new->prev = NULL;
			if (list->tail == NULL)
			{
				new->prev = NULL;
				list->head = new;
				list->tail = new;
			}
			else
			{
				list->tail->next = new;
				new->prev = list->tail;
				list->tail = new;
			}
			list->length++;
		}
	}
	return (list);
}

t_dblist	*dlist_supp_end(t_dblist *pilea)
{
	struct s_node	*tmp;

	if (!pilea)
		return (NULL);
	if (pilea->head == pilea->tail)
		return (free (pilea), NULL);
	tmp = pilea->tail;
	pilea->tail = pilea->tail->next;
	return (free(tmp), pilea);
}

void	ft_reverse_rotate_a(t_dblist *pilea)
{
	if (!pilea)
		return ;
	pilea = dlist_add_top(pilea, pilea->tail->value);
	pilea = dlist_supp_end(pilea);
	write(1, "rra\n", 4);
}
