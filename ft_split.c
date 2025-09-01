/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:24:04 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/28 09:43:48 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	shorten(size_t *start, size_t *end, const char *s, char c)
{
	while (s[*start] == c)
		(*start)++;
	*end = *start;
	while (s[*end] != c && s[*end])
		(*end)++;
}

static size_t	words(char const *s, char c)
{
	size_t	count;
	int		inword;

	count = 0;
	inword = 0;
	while (*s)
	{
		if (*s != c && !inword)
		{
			inword = 1;
			count++;
		}
		else if (*s == c)
			inword = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static void	init_variables(size_t *start, size_t *end, size_t *i)
{
	*start = 0;
	*end = 0;
	*i = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	str = malloc((words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	init_variables(&start, &end, &i);
	while (i < words(s, c))
	{
		shorten(&start, &end, s, c);
		str[i] = ft_substr(s, start, (end - start));
		if (!str[i])
		{
			free_split(str);
			return (NULL);
		}
		start = end;
		i++;
	}
	str[i] = 0;
	return (str);
}
/*int main()
{
	char str[] = " Rahaf Amaireh!";
	printf("%zu\n", words(str, ' '));
	char **arr = ft_split(str, ' ');
	size_t	i;
	i = 0;
	while (i < words(str, ' '))
	{
		printf("%s\n", arr[i]);
		i++;
	}
}*/
