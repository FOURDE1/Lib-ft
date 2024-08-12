/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 03:51:22 by hraad             #+#    #+#             */
/*   Updated: 2024/08/12 04:10:10 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	signcalc(char *s)
{
	int	sign;

	sign = 1;
	while (*(s) == '-' || *(s) == '+')
	{
		if (*(s) == '-')
			sign *= -1;
		else
			sign *= +1;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	unsigned int	sum;
	int				sign;

	i = 0;
	while (nptr[i] == 32 || nptr[i] == 9)
	{
		i++;
	}

	return (sign * sum);
}


