/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <ochoumou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 12:23:11 by ochoumou          #+#    #+#             */
/*   Updated: 2022/04/04 01:28:13 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	t_stack	a;
	t_stack	b;

	a = NULL;
	b = NULL;
	i = 0;
	if (argc > 2)
	{
		insert_numbers(&a, argv, argc);
		if (!check_sorted_stack(&a))
		{
			sort_stack(&a, &b);
			sort_all(&a, &b);
		}
	}
	else
		print_instruction("Invalid Arguments\n");
	return (0);
}
