/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:55:07 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 15:33:30 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_b(t_dblist *pilea)
{
	if (!pilea)
		return ;
	pilea = dlist_add_top(pilea, pilea->tail->value);
	pilea = dlist_supp_end(pilea);
	write(1, "rrb\n", 4);
}
