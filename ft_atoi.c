/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:58:17 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/12 09:58:33 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	m;
	int	in;

	i = 0;
	m = 1;
	in = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	if (str[i] == '-' || (str[i] == '+' && str[i] != '\0'))
	{
		if (str[i] == '-')
			m = m * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		in = in * 10 + (str[i] - '0');
		i++;
	}
	return (in * m);
}
/*int main ()
{
	printf ("%d", ft_atoi(" ++-99"));
}*/
