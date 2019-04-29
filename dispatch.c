/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:33:42 by mqian             #+#    #+#             */
/*   Updated: 2019/04/24 19:33:42 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

conversion *create_dispatch_table(/* arguments */)
{
	static conversion dispatch[10] = {
        format_c,
        format_d,
        format_f,
        format_i,
		format_s,
		format_o,
		format_p,
		format_u,
		format_x,
		format_x_upper,
    };
    return (dispatch);
}

int     letter_to_function(char c)
{
    if (c == 'c')
        return ((int)(c - 99));
    else if (c == 'd')
        return ((int)(c - 99));
    else if (c == 'f')
        return ((int)(c - 100));
    else if (c == 'i')
        return ((int)(c - 102));
    else if (c == 'o')
        return ((int)(c - 107));
    else if (c == 'p')
        return ((int)(c - 107));
    else if (c == 's')
        return ((int)(c - 109));
    else if (c == 'u')
        return ((int)(c - 110));
    else if (c == 'x')
        return ((int)(c - 112));
    else if (c == 'X')
        return ((int)(c - 79));
    else
        return (0);
}
