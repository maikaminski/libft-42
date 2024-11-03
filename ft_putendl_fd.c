/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:25:09 by makamins          #+#    #+#             */
/*   Updated: 2024/10/30 19:31:05 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*ptr;

	ptr = s;
	while (*ptr)
	{
		write(fd, ptr++, 1);
	}
	write(fd, "\n", 1);
}
