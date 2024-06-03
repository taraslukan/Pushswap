/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <tlukan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:59:51 by tlukan            #+#    #+#             */
/*   Updated: 2024/05/31 15:39:47 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# define NUM_COLLECTABLE 5
# define MAX_XPM 5

typedef struct s_mat
{
	int			size_n;
	char		**matr;
	int			*stac;
	long int	xmap;
	long int	ymap;
}	t_mat;

#endif