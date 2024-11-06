/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:03:00 by makamins          #+#    #+#             */
/*   Updated: 2024/11/04 21:22:52 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_l;

	if (*little == '\0')
		return ((char *)big);
	len_l = ft_strlen(little);
	i = 0;
	while (big[i] != '\0' && i + len_l <= len)
	{
		j = 0;
		while (j < len_l && big[i + j] == little[j])
			j++;
		if (j == len_l)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
