/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahussein <ahussein@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:41:56 by ahussein          #+#    #+#             */
/*   Updated: 2023/01/08 17:41:57 by ahussein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check(t_data *data)
{
	if (ft_is_duplicate(data->a, data->topa))
		error(data);
	sortarry(data);
	if (!ft_is_sorted(data))
		ft_push(data);
	ft_free(data);
}

void	error(t_data *data)
{
	free (data->indexarray);
	free (data->a);
	free (data->b);
	write(2, "Error\n", 6);
	exit (0);
}
