/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Thunderpurtz <Thunderpurtz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:18:53 by mqian             #+#    #+#             */
/*   Updated: 2019/07/12 19:57:13 by Thunderpurt      ###   ########.fr       */
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
	//conversion *formatters[10];
	void (*format_c)(char, t_print_struct *);
	void (*format_d)(signed int, t_print_struct *);
	void (*format_f)(double, t_print_struct *);
	void (*format_i)(signed int, t_print_struct *);
	void (*format_o)(int, t_print_struct *);
	void (*format_p)(void *, t_print_struct *);
	void (*format_s)(char *, t_print_struct *);
	void (*format_u)(unsigned int, t_print_struct *);
	void (*format_x)(int, t_print_struct *)
	void (*format_x_upper)(int, t_print_struct *);
	int			flags[9];
}				t_print_struct;

void format_c(char *format); //format_c(char *format, int argnum);
void format_d(char *format); //format_d(char *format, int argnum);
void format_f(char *format); //format_f(char *format, int argnum);
void format_i(char *format); //format_i(char *format, int argnum);
void format_o(char *format); //format_o(char *format, int argnum);
void format_p(char *format); //format_p(char *format, int argnum);
void format_s(char *format); //format_s(char *format, int argnum);
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
void	parse_params(t_print_struct *print, char *format);
void	print_conversion(t_print_struct *print, char *format, va_list args);
void	parse_set_flags(t_print_struct *print, char *format);
void	parse_set_len_mod(t_print_struct *print, char *format);
void	reset_flags(t_print_struct *p)
#endif
