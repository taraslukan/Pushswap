/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukan <lukan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:30:51 by lukan             #+#    #+#             */
/*   Updated: 2024/06/07 16:54:04 by lukan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_mat *first)
{
	int	temp;
	int	i;
	
	i = 0;
	while ((int) i < first->size_n)
	{
		if (i == 0)
		{
			temp = first->staca[i];
		}
		else
			first->staca[i - 1] = first->staca[i];
		i++;
	}
	i = first->size_n - 1;
		first->staca[i] = temp;
		ft_printf("stacA aggiornata\n");
		i = 0;
		printf("%i\n \n ", temp);
		while (i < first->size_n)
		{
			ft_printf("-- %i --\n",first->staca[i]);
			i++;
		}
		}