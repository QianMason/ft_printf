/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

struct test_structure
{
    char *format;
    char *test_1;
    char *test_2;
};

struct test_structure *init_struct(struct test_structure *structure, char *format, va_list args)
{

    printf("test pass\n");
    structure->format = format;
    printf("pass 4\n");
    structure->test_1 = va_arg(args, char*);
    printf("pass 5\n");
    structure->test_2 = va_arg(args, char*);
    printf("pass 6\n");
    va_end(args);
    printf("pass 100\n");
    return (structure);
}

void    init_test_func(char *format, ...)
{
    struct test_structure *p;
    p = (struct test_structure*)malloc(sizeof(struct test_structure));
    va_list ap;
    printf("pass1\n");
    va_start(ap, format);
    printf("pass2\n");
    printf("pass3\n");
    value = init_struct(p, format, ap);
    printf("pass7\n");
    printf("pass8\n");
    //printf("value of test1 = %s, value of test2 = %s\n", value->test_1, value->test_2);
}

int main()
{
    char *format = "this is a test string";
    char *test1 = "test1";
    char *test2 = "test2";
    init_test_func(format, test1, test2);

    return (0);
}
