/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:38:50 by makamins          #+#    #+#             */
/*   Updated: 2024/11/02 16:49:35 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s_new;
	unsigned int	len;
	unsigned int	i;
	
	len = ft_strlen(s);
	s_new = ft_calloc((len + 1), sizeof(char));
	if (s_new == NULL)
		return (NULL);
	s_new[len] = '\0';
	i = 0;
	while (i < len)
	{
		s_new[i] = f(i, s[i]);
		i++;
	}
	return (s_new);
}