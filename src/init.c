/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bako <ael-bako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:34:19 by ael-bako          #+#    #+#             */
/*   Updated: 2022/12/26 17:37:57 by ael-bako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*fill_stack_content(int ac, char **av)
{
	int		i;
	int		j;
	t_list	*stack;
	long	nb;
	char	**tab;

	i = 1;
	stack = NULL;
	stack = NULL;

	while (ac > i)
	{
		j = 0;
		tab = ft_split(av[i], ' ');
		while (tab[j])
		{
			nb = ft_atoi(tab[j++]);
			printf("%ld\n", nb);
			if (nb > INT_MAX || nb < INT_MIN)
			{
				printf("invalid number");
				return NULL;
			}
			if (i == 1)
				stack = stack_new((int)nb);
			else
				ft_stack_add_back(&stack, stack_new((int )nb));
		}
		i++;
	}


	while (ac > i)
	{
		nb = ft_atoi(av[i]);
		if (nb > INT_MAX || nb < INT_MIN)
		{
			printf("invalid number");
			return NULL;
		}
		if (i == 1)
			stack = stack_new((int)nb);
		else
			ft_stack_add_back(&stack, stack_new((int )nb));
		i++;
	}
	return (stack);
}
