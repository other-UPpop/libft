/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 02:52:40 by rohta             #+#    #+#             */
/*   Updated: 2024/05/14 18:33:08 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*new_str;

	new_str = NULL;
	if (c == '\0')
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
		if (*s == c)
			new_str = s;
		s++;
	}
	if (new_str != NULL)
		return ((char *)(new_str));
	return ((char *)('\0'));
}
