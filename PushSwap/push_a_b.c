/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:47:54 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/15 17:37:01 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_dblist *pilea, t_dblist *pileb)
{
	struct s_node	*new;

	if (!pileb || !pilea)
		return ;
	new = pileb->tail;
	pileb->tail->next = NULL;
	new->prev = pilea->tail;
	pilea->tail->next = new;
	write(1, "pa\n", 3);
}
