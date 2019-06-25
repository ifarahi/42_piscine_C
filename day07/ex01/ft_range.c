/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:53:25 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/07 16:03:27 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*table;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	table = (int*)malloc(sizeof(*table) * (max - min));
	while (min < max)
	{
		table[i] = min;
		min++;
		i++;
	}
	return (table);
}
