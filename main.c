/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:44:05 by hraad             #+#    #+#             */
/*   Updated: 2024/08/11 18:32:30 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", ft_isalpha('2'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isdigit('1'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isalnum('\n'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isascii('A'));
	return (0);
}
