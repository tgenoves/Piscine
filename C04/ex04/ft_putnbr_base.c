/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:22:47 by tgenoves          #+#    #+#             */
/*   Updated: 2022/09/21 22:45:26 by tgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}

int	check_base_valid(char *base)
{
	int	i;

	i = 0;
	if (*base == '\0' || ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	putnbr_recursive(long nbr, char *base, int base_1)
{
	char	number;

	if (nbr == 0)
		return ;
	number = *(base + (nbr % base_1));
	putnbr_recursive(nbr / base_1, base, base_1);
	write (1, &number, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_1;

	if (!check_base_valid(base))
		return ;
	base_1 = ft_strlen(base);
	if (nbr > 0)
		putnbr_recursive(nbr, base, base_1);
	if (nbr == -2147483648)
	{
		write(1, '-', 1);
		putnbr_recursive((nbr / -base_1), base, base_1);
		write(1, &base[nbr % base_1], 1);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		write(1, '-', 1);
		putnbr_recursive(nbr, base, base_1);
	}
}
