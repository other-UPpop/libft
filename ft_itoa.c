/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:23:03 by rohta             #+#    #+#             */
/*   Updated: 2024/04/26 16:47:22 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		number;
	int		numlen;
	char	*numstr;

	number = n;
	numlen = 0;
	while (number)
	{
		number /= 10;
		numlen++;
	}
	numstr = (char *)malloc((numlen + 1)*(sizeof(char)));
	if (!numstr)
		return (NULL);
	i = 0;
	while (number)
	{
		numstr[numlen - i - 1] = number % 10 + '0';
		number /= 10;
		i++;
	}
	numstr[numlen] = '\0';
	return (numstr);
}