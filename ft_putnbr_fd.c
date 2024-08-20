/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 02:14:14 by hraad             #+#    #+#             */
/*   Updated: 2024/08/17 16:21:33 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;
	char			buffer[10];
	int				i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
	}
	else
		num = n;
	if (num == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	i = 0;
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i > 0)
		ft_putchar_fd(buffer[--i], fd);
}
