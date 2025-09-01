/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralamair <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 09:02:30 by ralamair          #+#    #+#             */
/*   Updated: 2025/08/20 09:06:42 by ralamair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_char('-', fd);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_char(nb + '0', fd);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_char((nb % 10) + '0', fd);
	}
}

/*int main ()
{
ft_putnbr_fd(43,1);
}*/