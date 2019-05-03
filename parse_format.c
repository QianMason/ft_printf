/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:57:21 by mqian             #+#    #+#             */
/*   Updated: 2019/05/02 19:56:58 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_flags(t_print_struct *print, char *format)
{

	//loop through
}

void		parse_format(t_print_struct *print, char *format, va_list args, int count)
{
	int flags[9];

	return ;
}

void parse_and_print(t_print_struct *printf_struct, va_list args, int count)
{
	while (printf_struct->format)
	{
		if (printf_struct->format == '%')
		{
			printf_struct->format++;
			parse_flags(printf_struct, printf_struct->format);
			//parse_format(format);
			printf_struct->formatters[letter_to_function('s')](va_arg(args, char*));
		}
		else
		{
			write(1, printf_struct->format, 1);
			printf_struct->format++;
			count++;
		}
	}
	return ;
}

/*
** THIS IS THE CURRENT MAPPING FOR THE FLAG CHECK FLAGS: (created per %)
**
**           +           0           0/1
**           -           1           0/1
**           #           2           0/1
**           0           3           0/1
**         ' '           4           0/1
**        minw           5           0/minw
**   precision           6           0/precision
** cnvrsn flag           7           0 (no flags) or 1, 2, 3, 4 (hh, h, l, ll)
** conversions           8           letter to int
*/

