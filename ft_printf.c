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

int		parse_format(char *format, t_print_struct *print)
{
	int i = 0;
	int count = 0;
	int len = ft_strlen(format);
	char *temp;

	while (i < len && format[i])
	{
		if (!(temp = ft_strchr(format, '%')))
			return (count);
		else:
			count++;

	}
}

int		ft_printf(const char *format, ...)
{
	t_print_struct *printf_struct;

	printf_struct = initialize_struct(printf_struct);
	va_list ap;
	va_start(ap, format);


	return (0);
}
