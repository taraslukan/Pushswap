/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <tlukan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:02:07 by tlukan            #+#    #+#             */
/*   Updated: 2024/06/04 16:22:50 by tlukan           ###   ########.fr       */
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
	while (first.stac[i])
	{
		ft_printf("--  %i  --\n", first.stac[i]);
		i++;
	}
	free(first.stac);
	return (0);
}
