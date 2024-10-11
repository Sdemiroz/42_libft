/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdemiroz <sdemiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:02:24 by sdemiroz          #+#    #+#             */
/*   Updated: 2024/10/11 20:12:12 by sdemiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(str) + 1;
	dup = (char *)malloc(len);
	if (dup != NULL)
		ft_memcpy(dup, str, len);
	return (dup);
}
