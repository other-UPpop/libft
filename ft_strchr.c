/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:01:47 by rohta             #+#    #+#             */
/*   Updated: 2024/05/16 11:35:53 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char uc;
	uc = (unsigned char)c;
	while (*s && *s != uc)
		s++;
	if (*s == uc)
		return ((char *)(s));
	return (NULL);
}
