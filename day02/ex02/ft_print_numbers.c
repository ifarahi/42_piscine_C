/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 09:57:22 by ifarahi           #+#    #+#             */
/*   Updated: 2018/07/22 10:05:03 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char latter;

	latter = '0';
	while (latter <= '9')
	{
		ft_putchar(latter);
		latter++;
	}
}
