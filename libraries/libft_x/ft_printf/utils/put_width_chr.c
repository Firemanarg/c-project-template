/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_width_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-q <lsilva-q@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:44:39 by lsilva-q          #+#    #+#             */
/*   Updated: 2022/04/15 16:29:12 by lsilva-q         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_x.h"

/*	************************************************************************* */
/*	*******************   I M P L E M E N T A T I O N S   ******************* */
/*	************************************************************************* */

int	put_width_chr(int width, int len, char chr)
{
	int	i;

	i = 0;
	while (i < width - len)
	{
		ft_putchar_fd(chr, 1);
		i += 1;
	}
	return (i);
}

/*	************************************************************************* */
/*	**********************   E N D   O F   C O D E   ************************ */
/*	************************************************************************* */
