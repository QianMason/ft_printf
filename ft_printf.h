/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:18:53 by mqian             #+#    #+#             */
/*   Updated: 2019/05/02 19:57:00 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <stdarg.h>
# include <stdio.h> //remove this later
# include "libft/includes/libft.h"
# include <unistd.h>

typedef void conversion(char *format);

typedef struct s_print_struct
{
	char *format; //holds the raw string itself
	conversion *formatters[10];
	int			flags[9];
}				t_print_struct;

void format_c(char *format); //format_c(char *format, int argnum);
void format_d(char *format); //format_d(char *format, int argnum);
void format_f(char *format); //format_f(char *format, int argnum);
void format_i(char *format); //format_i(char *format, int argnum);
void format_o(char *format); //format_s(char *format, int argnum);
void format_p(char *format); //format_o(char *format, int argnum);
void format_s(char *format); //format_p(char *format, int argnum);
void format_u(char *format); //format_u(char *format, int argnum);
void format_x(char *format); //format_x(char *format, int argnum);
void format_x_upper(char *format); //format_x_upper(char *format, int argnum);
void parse_format(t_print_struct *print, char *format, va_list args, int count);

int	 ft_printf(const char *format, ...);
void init_dispatch_table(conversion *f[]);
t_print_struct *init_struct(t_print_struct *p, char *format, va_list args);
int  letter_to_function(char c);
void parse_and_print(t_print_struct *printf_struct, va_list args, int count);
t_print_struct *init_struct(t_print_struct *p, char *format, va_list args);
void	parse_flags(t_print_struct *print, char *format);

#endif
