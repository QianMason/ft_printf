/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:18:53 by mqian             #+#    #+#             */
/*   Updated: 2019/04/24 19:58:10 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include <stdio.h> //remove this later
# include "/libft/includes/libft.h"

typedef void conversion(char *format);

typedef struct s_print_struct
{
	char *format;
	struct t_list conversion_args;
	conversion formatters[10];
};				t_print_struct

void format_c(char *format);
void format_d(char *format);
void format_f(char *format);
void format_i(char *format);
void format_s(char *format);
void format_o(char *format);
void format_p(char *format);
void format_u(char *format);
void format_x(char *format);
void format_x_upper(char *format);
int	 parse_format(char *format, t_print_struct *print)

int	 ft_printf(const char *format, ...);


#endif
