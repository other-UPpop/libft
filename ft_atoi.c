/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 04:36:47 by rohta             #+#    #+#             */
/*   Updated: 2024/05/17 23:43:27 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	minus;

	sign = 1;
	num = 0;
	minus = 0;
	while ((*str >= '\a' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
			if (*str == '-')
				minus++;
		str++;
	}
	if (minus % 2 == 1)
		sign = sign * -1;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}


