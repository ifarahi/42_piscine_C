/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 21:52:44 by ifarahi           #+#    #+#             */
/*   Updated: 2018/07/28 21:52:49 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int a;

	if (nb > 0)
	{
		while (nb >= 0)
		{
			a = (nb % 3);
			if (nb == 3 || nb == 2 || nb == 5 || nb == 7)
				return (nb);
			if (a == 0 || (nb % 2) == 0 || (nb % 5) == 0 || (nb % 7) == 0)
				nb++;
			else
				break ;
		}
		return (nb);
	}
	else
		return (2);
}