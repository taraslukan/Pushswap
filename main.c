/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukan <lukan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:02:07 by tlukan            #+#    #+#             */
/*   Updated: 2024/06/07 16:19:22 by lukan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_mat	first;
	size_t	i;

	if (!validate(argc, argv, &first))
		return (write(2, "Error\n", 7));
	i = 0;
	while ((int) i < first.size_n)
	{
		ft_printf("--  %i  --\n", first.staca[i]);
		i++;
	}
	ra(&first);
	first.null = findnull(&first);
	ft_printf("il valore nullo é %i \n",first.null);
	if (!initialstack(&first, first.size_n, sizeof(int *)))
		return (write(2, "Error\n", 7));
	free(first.staca);
	return (0);
}
