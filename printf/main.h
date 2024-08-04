#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char * const format, ...);
int print_rot13(va_list args);
int print_revstr(va_list args);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_excl_string(va_list val);
int print_HEX_extra(unsigned int num);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_unsigned(va_list args);
int print_bin(va_list val);
int print_d(va_list args);
int print_i(va_list args);
int print_37(void);
int _strlenc(const char *s);
int _strlen(char *s);
int print_s(va_list val);
int print_c(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
