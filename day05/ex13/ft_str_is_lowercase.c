/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 00:29:44 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/01 00:32:53 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ('A' + 32) && str[i] <= ('Z' + 32)))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
