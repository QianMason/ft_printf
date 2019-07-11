/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Thunderpurtz <Thunderpurtz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:17:42 by mqian             #+#    #+#             */
/*   Updated: 2019/07/11 13:14:40 by Thunderpurt      ###   ########.fr       */
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

void	generate_format(t_print_struct *print)
{
	//look at built out table
	char *string;
	if (print->flags[8] == 0) //conversion never reached, stop lol
		return ;
	print->formatters[letter_to_function((char)print->flags[8])];
}
