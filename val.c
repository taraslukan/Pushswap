/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   val.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlukan <tlukan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:39:49 by tlukan            #+#    #+#             */
/*   Updated: 2024/06/04 16:41:02 by tlukan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	nonumero(const char *str);
int	control_doubles(t_mat *first);
int	valsplit(t_mat *first, char **argv);

int	validate(int argc, char **argv, t_mat *first)
{
	int		i;
	long	chec;

	i = 0;
	if (argc == 2)
		return (valsplit(first, argv));
	else
	{
		first->size_n = argc - 1;
		first->stac = malloc(first->size_n * sizeof(int *));
		first->matr = argv + 1;
		while ((int) i < first->size_n)
		{
			chec = ft_atoi(first->matr[i]);
			if (!nonumero(first->matr[i]) || chec > INT_MAX || chec < INT_MIN)
				return (0);
			first->stac[i] = chec;
			i++;
		}
		if (control_doubles(first) == 0)
			return (0);
		return (1);
	}
}

int	valsplit(t_mat *first, char **argv)
{
	size_t	i;
	long	checker;
	int		retu;

	i = 0;
	retu = 1;
	first->matr = ft_split(argv[1], ' ');
	while (first->matr[i])
		i++;
	first->size_n = i;
	i = 0;
	first->stac = malloc(first->size_n * sizeof(int *));
	while ((int) i < first->size_n)
	{
		checker = ft_atoi(first->matr[i]);
		if (!nonumero(first->matr[i]) || checker > INT_MAX || checker < INT_MIN)
			retu = 0;
		first->stac[i] = checker;
		i++;
	}
	free_mat(first->matr);
	if (retu == 1 && control_doubles(first) == 0)
		retu = 0;
	return (retu);
}

int	nonumero(const char *str)
{
	size_t			i;

	i = 0;
	while (str[i] == ' ' || ((str[i] > 8) && (str[i] < 14)))
		i++;
	if (ft_strlen(str + i) >= 62)
		return (0);
	if (str[i] == 45 || str[i] == 43)
		i++;
	if (!(str[i] >= 48) && (str[i] <= 57))
		return (0);
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	return (0);
}

int	control_doubles(t_mat *first)
{
	int	i;
	int	j;

	i = 0;
	while (i < first->size_n)
	{
		j = i + 1;
		while (j < first->size_n)
		{
			if (first->stac[i] == first->stac[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
