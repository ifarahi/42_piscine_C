/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 17:17:18 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/01 19:53:39 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int x;

	x = 1;
	while (x < argc)
	{
		i = 0;
		while (argv[x][i] != '\0')
		{
			ft_putchar(argv[x][i]);
			i++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
