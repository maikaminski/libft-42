/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:19:50 by makamins          #+#    #+#             */
/*   Updated: 2024/11/02 19:14:21 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_new;
	size_t	s_length;
	size_t	i;

	s_length = ft_strlen(s);
	s_new = (char *)malloc(s_length + 1);
	if (s_new == NULL)
		return (NULL);
	i = 0;
	while (i < s_length)
	{
		s_new[i] = s[i];
		i++;
	}
	s_new[i] = '\0';
	return (s_new);
}
