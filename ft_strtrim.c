/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hraad <hraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 00:39:24 by hraad             #+#    #+#             */
/*   Updated: 2024/08/19 00:58:01 by hraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	:static isfound()
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;
	size_t	size;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	if (size == 0)
	{
		ptr = (char *)malloc(1 * sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	if (ft_strlen(set) == 0)
	{
		ptr = (char *)malloc((size + 1) * sizeof(char));
		ft_strlcpy(ptr, s1, (size + 1));
		return (ptr);
	}
}
