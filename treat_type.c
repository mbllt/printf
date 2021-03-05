/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treat_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballet <ballet.mia.6@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:10:03 by mballet           #+#    #+#             */
/*   Updated: 2021/03/04 12:13:56 by mballet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			treat_type(t_flags *flag, char c, va_list args)
{
	int		nbr_printed;

	nbr_printed = 0;
	if (c == 'c')
		nbr_printed += treat_type_c(flag, nbr_printed, args, c);
	else if (c == 's')
		nbr_printed += treat_type_s(flag, nbr_printed, args, c);
	else if (c == 'd')
		nbr_printed += treat_type_d(flag, nbr_printed, args, c);
	else if (c == 'p')
		nbr_printed += treat_type_p(flag, nbr_printed, args, c);
	else if (c == 'i')
		nbr_printed += treat_type_i(flag, nbr_printed, args, c);
	else if (c == 'u')
		nbr_printed += treat_type_u(flag, nbr_printed, args, c);
	else if (c == 'x')
		nbr_printed += treat_type_x(flag, nbr_printed, args, c);
	else
		nbr_printed += treat_type_Xcapital(flag, nbr_printed, args, c);
	return (nbr_printed);
}