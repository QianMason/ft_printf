/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:17:42 by mqian             #+#    #+#             */
/*   Updated: 2019/04/24 19:58:13 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		parse_format(t_print_struct *print, char *format, va_list args)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			//print->formatters[letter_to_function('s')](va_arg(args, char*));
			format_specifier
		}
		else
		{
			//printf("char being put is %c\n", (char)*format);
			write(1, &*format, 1);
			format++;
		}
	}
	return ;
}

void parse_and_print(t_print_struct *printf_struct, va_list args, int count)
{
	parse_format(printf_struct, printf_struct->format, args);
	return ;
}

int		ft_printf(const char *format, ...)
{
	t_print_struct *printf_struct;
	va_list args;
	int count;
	count = 0;
	//setup start variable arguments list and initialize struct
	va_start(args, format);
	printf_struct = init_struct(printf_struct, (char*)format, args);
	parse_and_print(printf_struct, args, count); //primary calling function
	//FREE STRUCT AFTER
	//free(printf_struct);

	return (count);
}

int		main(void)
{
	ft_printf("this is a %s\n", "string");
	return (0);
}
