/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 04:36:47 by rohta             #+#    #+#             */
/*   Updated: 2024/05/14 18:00:02 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_number(char *str, int *num)
{
	while ('0' <= *str && *str <= '9')
	{
		*num = *num * 10 + (*str - '0');
		str++;
	}
}

int	ft_atoi(const char *str)
{
	int	minus;
	int	num;

	num = 0;
	minus = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\r' || *str == '\f')
	{
		str++ ;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			minus++;
		}
		str++;
	}
	ft_number((char *)str, &num);
	if (minus % 2 == 1)
	{
		num = -num;
	}
	return (num);
}
