/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 17:09:21 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/08 17:29:59 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
		j = 0;
		while (str[j] != '\0')
		{
			str[j] == str[i];
			i--;
			j++;
		}
	return (str);
}

int	main()
{
	char str[] = "hello";
	ft_strrev(str);
	printf("%s", str);
	return 0;
}
