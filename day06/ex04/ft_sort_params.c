/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 09:43:47 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/03 11:09:03 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int j;
	int k;

	k = 2;
	j = 1;
	while (argc - 1)
	{
			if (ft_strcmp(argv[j],argv[k]) > 0)
				ft_putstr(argv[k]);
			else if (ft_strcmp(argv[j],argv[k]) < 0)
				ft_putstr(argv[j]);
			else
				ft_putstr(argv[j]);	
			j++;
			k++;
	}
	return (0);
}
