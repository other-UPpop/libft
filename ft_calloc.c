/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohta <rohta@student.42.jp>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:11:14 by rohta             #+#    #+#             */
/*   Updated: 2024/05/25 16:15:47 by rohta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	if (count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	memory = (void *)malloc(count * size);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, (count * size));
	return (memory);
}
