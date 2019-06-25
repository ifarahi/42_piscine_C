/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 22:28:34 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/04 11:42:44 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int in;

	in = 0;
	while (s1[in] == s2[in] && s1[in] != '\0' && s2[in] != '\0')
		in++;
	return (s1[in] - s2[in]);
}