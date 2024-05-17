/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:52:40 by rohta             #+#    #+#             */
/*   Updated: 2024/05/16 11:39:00 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*new_str;
	unsigned char uc;

	new_str = NULL;
	uc = c;
	if (uc == '\0')
	{
		while (*s)
		{
			s++;
			new_str = s;
		}
		return ((char *)(new_str));
	}
	while (*s)
	{
		if (*s == uc)
			new_str = s;
		s++;
	}
	if (new_str != NULL)
		return ((char *)(new_str));
	return ((char *)('\0'));
}
