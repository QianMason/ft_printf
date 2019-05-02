#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

void    print_test_helper(char *string, va_list args)
{
    while (*string)
	{
		if (*string == '%')
		{
		    //printf("%s", (va_arg(args, char*)));
            write(1, va_args(args, char*), 6);
			string = string + 2;
		}
		else
		{
			write(1, &*string, 1);
			string++;
		}
	}
}


void    print_test(char *string, ...)
{
    va_list ap;
    va_start(ap, string);
    print_test_helper(string, ap);
}

int main()
{
    print_test("this is a %s\n", "string");
    return 0;
}
