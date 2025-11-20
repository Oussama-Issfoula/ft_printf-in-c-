#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h> 
#include <unistd.h>
#include <stdlib.h>

int add(int len, ...);

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *str);
int ft_putnbr(int n);
int ft_hex(unsigned int n, char format);
int ft_unsigned(unsigned int n);

#endif