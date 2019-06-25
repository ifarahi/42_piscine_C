/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifarahi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 20:17:35 by ifarahi           #+#    #+#             */
/*   Updated: 2018/08/02 22:30:51 by ifarahi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	while (argc - 1 > 0)
	{
		i = 0;
		while (argv[argc - 1][i] != '\0')
		{
			ft_putchar(argv[argc - 1][i]);
			i++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
