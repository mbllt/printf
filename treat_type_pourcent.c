/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_type_pourcent.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 14:07:31 by mballet           #+#    #+#             */
/*   Updated: 2021/03/17 16:38:01 by mballet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	treat_type_pourcent(t_flags *flag, int nbr_prt, char c)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 2);
	if (!(str))
		return ((nbr_prt *= -1));
	i = 0;
	str[i] = '%';
	str[i + 1] = 0;
	if ((flag->nbr_dot > 0)
		|| (flag->width != 0 && !(flag_width(&str, flag, c)))
		|| (flag->minus == 1 && flag->width != 0
			&& !(flag_minus(&str, 1, flag))))
		return ((nbr_prt *= -1));
	while (str[i])
		write(1, &str[i++], 1);
	free(str);
	return (i);
}
