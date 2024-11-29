/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:53:17 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/08 15:24:43 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*srcc;

	dst = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	if (dst > srcc)
	{
		while (n--)
			dst[n] = srcc[n];
	}
	else
		ft_memcpy(dst, srcc, n);
	return (dst);
}
