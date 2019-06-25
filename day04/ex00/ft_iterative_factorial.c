/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 22:29:26 by ifarahi           #+#    #+#             */
/*   Updated: 2018/07/25 23:05:30 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb > 0 && nb <= 12)
	{
		while (nb > 0)
		{
			fact = fact * nb;
			nb--;
		}
		return (fact);
	}
	else
	{
		return (0);
	}
}
