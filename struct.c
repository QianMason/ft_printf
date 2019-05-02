#include "ft_printf.h"

t_print_struct *init_struct(t_print_struct *p, char *format, va_list args)
{

	if (!(p = (t_print_struct *)malloc(sizeof(t_print_struct))))
		return (NULL);
	p->format = format;
	init_dispatch_table(p->formatters);
	return (p);
}
