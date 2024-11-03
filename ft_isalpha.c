/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makamins <makamins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:49:06 by makamins          #+#    #+#             */
/*   Updated: 2024/10/30 19:27:36 by makamins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122))
    {
        return (1);
    }
    return (0);
}
