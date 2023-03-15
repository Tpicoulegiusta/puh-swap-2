/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpicoule <tpicoule@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:46:56 by tpicoule          #+#    #+#             */
/*   Updated: 2023/03/15 17:27:15 by tpicoule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			i;
	t_dblist	*pilea;
	t_dblist	*pileb;

	i = 0;
	//GESTION DERREUR A FAIRE
	pilea = dlist_new();
	pileb = dlist_new();
	while (i < argc - 1)
	{
		pilea = dlist_add_head(pilea, i++);
		pilea->head->value = ft_atoi(argv[i]);
		printf("%d\n", pilea->head->value);
	}
	i = 0;
	while (i < argc - 1)
	{
		pileb = dlist_add_head(pileb, i++);
		pileb->head->value = ft_atoi(argv[i]);
		printf("%d\n", pileb->head->value);
	}

	t_node	*dbg = pilea->head;
	while (dbg)
	{
		printf("------> dbg (%p)=\tnext = %p\tprev = %p\tvalue = %d\n", dbg, dbg->next, dbg->prev, dbg->value);
		dbg = dbg->next;
	}
	ft_push_a(pilea, pileb);
/* 	printf("%d\n", pileb->tail->value);
	printf("%d\n", pileb->head->value);
	printf("%p\n", pilea);
	printf("%p\n", pileb);
	printf("%d\n", pileb->tail->value);*/
	dbg = pilea->head;
	while (dbg)
	{
		printf("------> dbg (%p)=\tnext = %p\tprev = %p\tvalue = %d\n", dbg, dbg->next, dbg->prev, dbg->value);
		dbg = dbg->next;
	}
	printf("%d\n", pileb->head->value);
	printf("%d\n", pileb->head->next->value);
	printf("%d\n", pileb->head->next->next->value);
	printf("%d\n", pileb->head->next->next->next->value);
	printf("%d\n", pileb->head->next->next->next->next->value);
}

//GERER SI IL Y A 3NOMBRES RANDOMS
/* 
t_dblist	*ft_tree(t_dblist *pilea, t_dblist *pileb, int argc, char **argv)
{
	int			i;

	i = 0;
	
}
 */
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
