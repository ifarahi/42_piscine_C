/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:46:17 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/09 13:46:30 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int index;

	index = 0;
	while (*str++)
		index++;
	return (index);
}

char					*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = malloc(sizeof(char) * ft_strlen(src));
	while (*(src + i) != '\0')
	{
		*(copy + i) = *(src + i);
		i++;
	}
	*(copy + i) = '\0';
	return (copy);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int					index;
	struct s_stock_par	*stock;

	index = 0;
	stock = malloc(sizeof(struct s_stock_par) * (ac + 1));
	while (index < ac)
	{
		stock[index].size_param = ft_strlen(av[index]);
		stock[index].str = *(av + index);
		stock[index].copy = ft_strdup(*(av + index));
		stock[index].tab = ft_split_whitespaces(av[index]);
		index++;
	}
	stock[index].str = 0;
	return (stock);
}
