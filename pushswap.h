/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <tlukan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:59:35 by tlukan            #+#    #+#             */
/*   Updated: 2024/06/04 16:55:17 by tlukan           ###   ########.fr       */
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

# define KEY_ARROW_RIGHT 65363
# define KEY_ARROW_LEFT 65361
# define KEY_ARROW_UP 65362
# define KEY_ARROW_DOWN 65364

# define KEY_D 100
# define KEY_A 97
# define KEY_W 119
# define KEY_S 115

# define KEY_ESC 65307

int		numbercontrol(char *str);
int		ft_error(int error);
int		validate(int argc, char **argv, t_mat *first);
void	free_mat(char **mat);

#endif