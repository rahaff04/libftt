/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 09:19:22 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/16 09:19:48 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*n;
	size_t			i;

	if (nmemb == 0 || size == 0)
	{
		n = malloc(1);
		if (!n)
			return (NULL);
		n[0] = '\0';
		return (n);
	}
	n = malloc(nmemb * size);
	if (!n)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		n[i] = 0;
		i++;
	}
	return (n);
}
/*#include <stdio.h>
int main()
{
	char *s = ft_calloc(2, 3);

	printf("%d", s[0]);
}*/
