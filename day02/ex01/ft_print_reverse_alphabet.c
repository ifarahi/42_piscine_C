/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 23:05:42 by ifarahi           #+#    #+#             */
/*   Updated: 2018/07/23 15:36:47 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int latter;

	latter = 'z';
	while (latter >= 'a')
	{
		ft_putchar(latter);
		latter--;
	}
}
