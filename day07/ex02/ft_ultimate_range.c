/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 15:07:44 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/07 18:46:41 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*table;
	int	i;

	if (min >= max)
		return (0);
	table = (int*)malloc((max - min) * sizeof(int));
	if (table == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		table[i] = min++;
		i++;
	}
	*range = table;
	return (i);
}
