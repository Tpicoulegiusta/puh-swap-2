/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:12:46 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 15:33:17 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_b(t_dblist *pilea)
{
	if (!pilea)
		return ;
	pilea = dlist_add_end(pilea, pilea->head->value);
	pilea = dlist_supp_first(pilea);
	write(1, "rb\n", 3);
}
