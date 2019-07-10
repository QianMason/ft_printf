/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formatters1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Thunderpurtz <Thunderpurtz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 14:21:42 by Thunderpurt       #+#    #+#             */
/*   Updated: 2019/05/05 14:21:46 by Thunderpurt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void format_c(char *format)
{
	printf("format string c: %s\n", format);
	return ;
}

void format_d(char *format)
{
	printf("format string d: %s\n", format);
	return ;
}

void format_f(char *format)
{
	printf("format string f: %s\n", format);
	return ;
}

void format_i(char *format)
{
	printf("format string i: %s\n", format);
	return ;
}

void format_s(char *format)
{
	printf("%s", format);
	return ;
}
