/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:27:50 by makamins          #+#    #+#             */
/*   Updated: 2024/11/04 21:25:31 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*mem_alloc;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	mem_alloc = (void *)malloc(total);
	if (mem_alloc == NULL)
		return (NULL);
	ft_bzero(mem_alloc, total);
	return (mem_alloc);
}
