/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:54:19 by makamins          #+#    #+#             */
/*   Updated: 2024/11/02 16:47:10 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	int	start;
	int	end;
	int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != *set)
		start++;
	end = *s1 - 1;
	while (s1[end] != *set)
		end--;
	if (start > end)
		return ("");
	s2 = ft_calloc((end - start + 1), sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		s2[i] = s1[i];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
