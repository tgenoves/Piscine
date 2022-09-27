/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgenoves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:12:45 by tgenoves          #+#    #+#             */
/*   Updated: 2022/09/17 16:25:36 by tgenoves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_lowcase(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] >= 'A' && str[s] <= 'Z')
			str[s] = str[s] + 32;
			s++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	s;

	s = 0;
	ft_lowcase(str);
	while (str[s] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if (str[s] > 57 && str[s] < 65 && str[s + 1] >= 97 && str[s + 1] < 123)
			str[s + 1] = str[s + 1] - 32;
		if (str[s] >= 0 && str[s] < 48 && str[s + 1] >= 97 && str[s + 1] < 123)
			str[s + 1] = str[s + 1] - 32;
		if (str[s] > 'z' && str[s + 1] >= 'a' && str[s + 1] < 123)
			str[s + 1] = str[s + 1] - 32;
		if (str[s] > 90 && str[s] < 97 && str[s + 1] >= 97 && str[s + 1] < 123)
			str[s + 1] = str[s + 1] - 32;
		s++;
	}
	return (str);
}
