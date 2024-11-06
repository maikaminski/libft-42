/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:08:09 by makamins          #+#    #+#             */
/*   Updated: 2024/11/06 19:40:19 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	ft_fill_digits(char *str, unsigned int num, int length)
{
	str[length] = '\0';
	while (length > 0)
	{
		length--;
		str[length] = '0' + (num % 10);
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	char			*result;
	int				length;

	length = ft_get_num_length(n);
	result = (char *)malloc(length + 1);
	if (!result)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		num = -n;
		ft_fill_digits(result + 1, num, length - 1);
	}
	else
	{
		num = n;
		ft_fill_digits(result, num, length);
	}
	return (result);
}
