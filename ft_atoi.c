/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:35:27 by makamins          #+#    #+#             */
/*   Updated: 2024/11/04 21:31:54 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	isminus;
	int	isdigit;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	isminus = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			isminus *= -1;
		i++;
	}
	isdigit = 0;
	while (ft_isdigit(nptr[i]))
	{
		isdigit = isdigit * 10 + (nptr[i] - '0');
		i++;
	}
	return (isdigit * isminus);
}
