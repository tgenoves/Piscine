/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:41:48 by tgenoves          #+#    #+#             */
/*   Updated: 2022/09/17 16:23:41 by tgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	f;

	f = 0;
	while (str[f] != '\0')
	{
		if (str[f] < 'A' || (str[f] > 'Z' && str[f] < 'a') || str[f] > 'z')
		{
			return (0);
		}
		f++;
	}
	return (1);
}
