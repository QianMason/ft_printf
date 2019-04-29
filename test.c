/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
# include <stdarg.h>
# include <stdio.h> //remove this later

typedef void conversion(char *format);


void format_c(char *format)
{
	printf("format_c: %s\n", format);
	return ;
}

void format_d(char *format)
{
	printf("format_d: %s\n", format);
	return ;
}

void format_f(char *format)
{
	printf("format_f: %s\n", format);
	return ;
}

void format_i(char *format)
{
	printf("format_i: %s\n", format);
	return ;
}

void format_o(char *format)
{
	printf("format_o: %s\n", format);
	return ;
}

void format_p(char *format)
{
	printf("format_p: %s\n", format);
	return ;
}

void format_s(char *format)
{
	printf("format_s: %s\n", format);
	return ;
}

void format_u(char *format)
{
	printf("format_u: %s\n", format);
	return ;
}

void format_x(char *format)
{
	printf("format_x: %s\n", format);
	return ;
}

void format_x_upper(char *format)
{
	printf("format_x_upper: %s\n", format);
	return ;
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

void create_dispatch_table(conversion *f[])
{
	f[0] = format_c;
    f[1] = format_d;
    f[2] = format_f;
    f[3] = format_i;
	f[4] = format_o;
	f[5] = format_p;
	f[6] = format_s;
	f[7] = format_u;
	f[8] = format_x;
	f[9] = format_x_upper;
}

int main()
{
    char *format = "this is a string %s that needs formatting!! %d\n";
    conversion *formatters[10];
    create_dispatch_table(formatters);
    printf("letter to func converstion of o = %d\n", letter_to_function('o'));
    //conversion *formatters = create_dispatch_table();
    formatters[letter_to_function('X')](format);
    return 0;
}
