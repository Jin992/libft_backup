/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earteshc <earteshc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 17:18:19 by earteshc          #+#    #+#             */
/*   Updated: 2017/11/15 14:00:04 by earteshc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	if (*big == '\0' && *little == '\0')
		return ((char *)big);
	if (*little == '\0' && *big != '\0')
		return ((char *)big);
	while (*big != '\0')
	{
		if (ft_strncmp(big, little, ft_strlen(little)) == 0)
			return ((char *)big);
		big++;
	}
	if (ft_strlen(big) == 0 && ft_strlen(little) == 0)
		return ((char *)big);
	return (NULL);
}
