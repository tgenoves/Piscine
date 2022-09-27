/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 06:46:22 by tgenoves          #+#    #+#             */
/*   Updated: 2022/09/13 07:13:37 by tgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_stampa(char f0, char f1, char g0, char g1)
{
	ft_putchar(f0);
	ft_putchar(f1);
	ft_putchar(' ');
	ft_putchar(g0);
	ft_putchar(g1);
	if (f0 != '9' || f1 != '8' || g0 != '9' || g1 != '9')
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	f0;
	char	f1;
	char	g0;
	char	g1;
	{
		f0 = '0' - 1;
		while (++f0 <= '9')
		{
			f1 = '0' - 1;
			while (++f1 <= '9')
			{
				g0 = f0 - 1;
				while (++g0 <= '9')
				{
					g1 = f1;
					while (++g1 <= '9')
						ft_stampa(f0, f1, g0, g1);
					g1--;
				}
			}
		}
	}
}
