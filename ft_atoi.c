/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aychikhi <aychikhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:58:48 by aychikhi          #+#    #+#             */
/*   Updated: 2024/11/09 16:07:34 by aychikhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	output(const char *str, int sign)
{
	long long	nb;
	long long	res;

	nb = 0;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = nb;
		nb = (nb * 10) + *str - '0';
		if (res != nb / 10)
		{
			if (sign == -1)
				return (0);
			return (-1);
		}
		str++;
	}
	return (nb * sign);
}

int	ft_atoi(const char *str)
{
	int	sign;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	return (output(str, sign));
}
