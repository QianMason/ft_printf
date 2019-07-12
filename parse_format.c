/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Thunderpurtz <Thunderpurtz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 16:57:21 by mqian             #+#    #+#             */
/*   Updated: 2019/07/12 14:44:28 by Thunderpurt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_params(t_print_struct *print, char *format)
{
	while (*format)
	{
		parse_set_flags(print, format);
		if (atoi(*format) > 0)
			print->flags[5] = atoi(*format);
		else if (*format == '.') //dot precision
			print->flags[6] = 1;
		else if (*format == 'h' || *format == 'l')
		{
			if (*format == 'h')
			{
				if ((*(format + 1)) == 'h') // then hh
					print->flags[7] = 1;
				else
					print->flags[7] = 2;
			}
			else
			{
				if ((*(format + 1)) == 'l')
					print->flags[7] = 4;
				else
					print->flags[7] = 3;
			}
		}
		else if (is_conversion(format))
		{
			print->flags[8] = (int)(*format); //ascii value
			return;
		}
		else if (*format == '%')
			return ;
		format++;
	}
}

void		parse_format(t_print_struct *print, char *format, va_list args, int count)
{
	int flags[9];

	return ;
}

void parse_and_print(t_print_struct *printf_struct, va_list args, int count)
{
	while (*(printf_struct->format))
	{
		if (*(printf_struct->format) == '%')
		{
			printf_struct->format++;
			parse_params(printf_struct, printf_struct->format);
			//parse_format(format);
			printf_struct->formatters[letter_to_function('s')](va_arg(args, char*));
		}
		else
		{
			write(1, printf_struct->format, 1);
			printf_struct->format++;
			count++;
		}
		(printf_struct->format)++;
	}
	return ;
}

int		is_conversion(char *format)
{
	if (*format == 'c' || *format == 'd' || *format == 'f' || *format == 'i'
		|| *format == 's' || *format == 'o' || *format == 'p' || *format == 'u'
			|| *format == 'x' || *format == 'X')
			{
				return (1);
			}
	return (0);
}

void	parse_set_flags(t_print_struct *print, char *format)
{
	if (*format == '+')
		print->flags[0] = 1;
	else if (*format == '-')
		print->flags[1] = 1;
	else if (*format == '#')
		print->flags[2] = 1;
	else if (*format == '0')
		print->flags[3] = 1;
	else if (*format == ' ')
		print->flags[4] = 1;
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

