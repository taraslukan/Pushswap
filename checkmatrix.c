/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkmatrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <tlukan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:58:08 by tlukan            #+#    #+#             */
/*   Updated: 2024/05/31 14:34:26 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	numbercontrol(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 47 && str[i] < 58) || str[i] == 32)
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_error(int error)
{
	if (error == 1)
		ft_putstr(ERROR_1);
	else if (error == 2)
		ft_putstr(ERROR_2);
	else if (error == 3)
		ft_putstr(ERROR_3);
	else if (error == 4)
		ft_putstr(ERROR_4);
	else if (error == 5)
		ft_putstr(ERROR_5);
	else if (error == 6)
		ft_putstr(ERROR_6);
	else if (error == 7)
		ft_putstr(ERROR_7);
	return (0);
}
