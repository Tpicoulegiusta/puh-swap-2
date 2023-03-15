/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:52:33 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/14 15:57:18 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*dlist_add_head(t_dblist *list, int value)
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
				new->next = NULL;
				list->head = new;
				list->tail = new;
			}
			else
			{
				list->head->prev = new;
				new->next = list->head;
				list->head = new;
			}
			list->length++;
		}
	}
	return (list);
}

t_dblist	*dlist_supp_first(t_dblist *pilea)
{
	struct s_node	*tmp;

	if (!pilea)
		return (NULL);
	if (pilea->head == pilea->tail)
		return (free (pilea), NULL);
	tmp = pilea->head;
	pilea->head = pilea->head->next;
	return (free(tmp), pilea);
}

void	ft_rotate_a(t_dblist *pilea)
{
	if (!pilea)
		return ;
	pilea = dlist_add_head(pilea, pilea->head->value);
	pilea = dlist_supp_first(pilea);
	write(1, "ra\n", 3);
}
