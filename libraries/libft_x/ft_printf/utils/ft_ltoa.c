/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 11:14:39 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/04/15 00:22:07 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_x.h"

/*	************************************************************************* */
/*	*****************   S T A T I C   F U N C T I O N S   ******************* */
/*	************************************************************************* */

static char	*rec_get_str(char *str, unsigned long int n);

/*	************************************************************************* */
/*	*******************   I M P L E M E N T A T I O N S   ******************* */
/*	************************************************************************* */

char	*ft_ltoa(long int n)
{
	char	*str;
	char	*tmp;

	if (n < 0)
	{
		tmp = rec_get_str(NULL, n * (-1));
		if (!tmp)
			return (NULL);
		str = b_appchr(tmp, '-');
		free(tmp);
		tmp = NULL;
	}
	else
		str = rec_get_str(NULL, n);
	return (str);
}

/*	************************************************************************* */

static char	*rec_get_str(char *str, unsigned long int n)
{
	char	*result;

	result = b_appchr(str, (n % 10) + '0');
	if (!result)
	{
		free(str);
		str = NULL;
		return (NULL);
	}
	free(str);
	str = NULL;
	if (n / 10 == 0)
		return (result);
	return (rec_get_str(result, n / 10));
}

/*	************************************************************************* */
/*	**********************   E N D   O F   C O D E   ************************ */
/*	************************************************************************* */
