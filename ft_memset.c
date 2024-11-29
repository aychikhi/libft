/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:13:26 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/10 17:23:55 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	i = 0;
	while (n > i)
	{
		str[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
