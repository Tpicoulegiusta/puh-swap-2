/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:39:05 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/13 13:00:35 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dblist	*dlist_new(void)
{
	t_dblist	*new;

	new = malloc(sizeof * new);
	if (new != NULL)
	{
		new->length = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}
