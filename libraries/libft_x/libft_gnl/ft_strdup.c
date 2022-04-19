/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:13:47 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/04/15 00:21:13 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_x.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	len;
	size_t	index;

	len = ft_strlen(str);
	if (len == 0)
		return (NULL);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < len)
	{
		result[index] = str[index];
		index += 1;
	}
	result[len] = '\0';
	return (result);
}
