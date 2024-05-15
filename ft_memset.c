/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:44:22 by rohta             #+#    #+#             */
/*   Updated: 2024/05/14 16:45:20 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char		*dst;
	unsigned char		cha;

	dst = (unsigned char *)buf;
	cha = (unsigned char)ch;
	while (n--)
	{
		*dst = cha;
		dst++;
	}
	return (buf);
}
