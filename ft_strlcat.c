/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:38:50 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/28 09:02:55 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (dlen >= size)
		return (size + slen);
	i = 0;
	while ((src[i]) && (dlen + i) < size - 1)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[i + dlen] = '\0';
	return (dlen + slen);
}
/*#include <bsd/string.h>
int main ()
{
	char s1[] = "hello";
	char s2[] = " Rahaf";
	printf("%zu", ft_strlcat(s1, s2, 4));
	printf("%zu", strlcat(s1, s2, 4));
}*/
