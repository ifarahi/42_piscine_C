/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 10:07:12 by ifarahi           #+#    #+#             */
/*   Updated: 2018/07/28 10:11:06 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int a;
	int b;

	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	a = ft_fibonacci(index - 1);
	b = ft_fibonacci(index - 2);
	return (a + b);
}
