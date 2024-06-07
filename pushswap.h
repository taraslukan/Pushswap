/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukan <lukan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:59:35 by tlukan            #+#    #+#             */
/*   Updated: 2024/06/07 16:09:32 by lukan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <unistd.h>
# include "struct.h"
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include "ft_libft/libft.h"
# include "struct.h"
# include "liberror.h"
# include "ft_printf/ft_printf.h"

int		numbercontrol(char *str);
int		ft_error(int error);
int		validate(int argc, char **argv, t_mat *first);
void	free_mat(char **mat);
int		findnull(t_mat *first);
int		*initialstack(t_mat *first, size_t count, size_t size);
void	sa(t_mat *first);
void	sb(t_mat *first);
void	ss(t_mat *first);
void	ra(t_mat *first);
#endif