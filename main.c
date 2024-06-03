/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <tlukan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:02:07 by tlukan            #+#    #+#             */
/*   Updated: 2024/06/03 16:29:10 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_mat	first;
	size_t	i;

	i = 0;
	if (argc == 2)
	{
		if (numbercontrol(argv[1]) == 1)
			first.matr = ft_split(argv[1], ' ');
		while (first.matr[i])
			i++;
		first.size_n = i;
		i = 0;
		first.stac = (int *) malloc(first.size_n * sizeof (int*));
		while ((int) i <= first.size_n)
		{
	ft_printf("--I numeri  sono--\n  %c \n", first.matr[i]);
			first.stac[i] = (int) ft_atoi(first.matr[i]);
			i++;
		}
	}
	i = 0;
	while (first.matr[i])
	{
		ft_printf("--  %i  --\n", first.matr[i]);
		i++;
	}
	return (0);
}
