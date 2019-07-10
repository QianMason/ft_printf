/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Thunderpurtz <Thunderpurtz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 14:22:16 by Thunderpurt       #+#    #+#             */
/*   Updated: 2019/05/05 14:22:18 by Thunderpurt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_print_struct *init_struct(t_print_struct *p, char *format, va_list args)
{
	int i;

	i = 0;
	if (!(p = (t_print_struct *)malloc(sizeof(t_print_struct))))
		return (NULL);
	p->format = format;
	init_dispatch_table(p->formatters);
	while (i < 10)
	{
		p->flags[i] = 0;
		i++;
	}
	return (p);
}
