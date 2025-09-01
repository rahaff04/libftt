/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:42:36 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/14 10:54:56 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;

	s = (unsigned char *)b;
	while (len > 0)
	{
		s[len - 1] = c;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char s[] = "hello!";
	char x  = 'g';

	ft_memset(s,x, 3);
	printf("%s",s);
	return (0);
}*/
