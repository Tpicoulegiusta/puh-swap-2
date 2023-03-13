/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:47:54 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 12:50:11 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_dblist *pilea, t_dblist *pileb)
{
	struct s_node	*new;

	if (!pileb)
		return ;
	new = pileb->head;
	pileb->head->next->prev = NULL;
	new->next = pilea->head;
	pilea->head->prev = new;
	write(1, "pa\n", 3);
}

void	ft_push_b(t_dblist *pilea, t_dblist *pileb)
{
	struct s_node	*new;

	if (!pilea)
		return ;
	new = pileb->head;
	pileb->head->next->prev = NULL;
	new->next = pilea->head;
	pilea->head->prev = new;
	write(1, "pb\n", 3);
}
