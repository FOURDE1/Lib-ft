/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:22:31 by hraad             #+#    #+#             */
/*   Updated: 2024/08/11 22:42:50 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
		ptr[i++] = (char)c;
	return (s);
}
