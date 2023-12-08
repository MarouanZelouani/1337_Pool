/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzelouan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:16:47 by mzelouan          #+#    #+#             */
/*   Updated: 2023/08/20 10:24:29 by mzelouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_c(int n)
{
	char	c[10];
	int		i;

	i = 0;
	while (n)
	{
		c[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	while (i > 0)
	{
		write(1, &c[--i], 1);
	}
}

void	ft_putnbr(int nb)
{
	long int	nbl;

	nbl = nb;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl *= -1;
	}
	if (nbl == 2147483648)
	{
		write(1, "2147483648", 10);
		return ;
	}
	if (nbl == 0)
	{
		write(1, "0", 1);
		return ;
	}
	print_c(nbl);
}
