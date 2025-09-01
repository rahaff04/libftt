/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:16:59 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/14 11:17:02 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;

	x = (char)c;
	while (*s)
	{
		if (*s == x)
		{
			return ((char *)s);
		}
		s++;
	}
	if (x == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
