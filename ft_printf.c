/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:17:42 by mqian             #+#    #+#             */
/*   Updated: 2019/05/02 17:51:46 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_print_struct	*printf_struct;
	va_list			args;
	int				count;

	count = 0;
	//setup start variable arguments list and initialize struct
	va_start(args, format);
	printf_struct = init_struct(printf_struct, (char*)format, args);
	parse_and_print(printf_struct, args, count);
	//FREE STRUCT AFTER
	//free(printf_struct);

	return (count);
}
