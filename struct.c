#include "ft_printf.h"

t_print_struct *initialize_struct(char *format)
{
	t_print_struct *p;

	if (!(p = (t_print_struct *)malloc(sizeof(t_print_struct))))
		return (NULL);
	p->format = format;
	
}
