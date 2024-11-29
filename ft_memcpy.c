/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:12:39 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/08 16:05:24 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*srcc;

	if (src == dst)
		return (dst);
	i = 0;
	str = (unsigned char *)dst;
	srcc = (const unsigned char *)src;
	while (i < n)
	{
		str[i] = srcc[i];
		i++;
	}
	return (dst);
}
