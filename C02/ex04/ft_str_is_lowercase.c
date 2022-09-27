/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:50:46 by tgenoves          #+#    #+#             */
/*   Updated: 2022/09/15 15:56:17 by tgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		if (str[g] < 'a' || str[g] > 'z')
		{
			return (0);
		}
		g++;
	}
	return (1);
}
