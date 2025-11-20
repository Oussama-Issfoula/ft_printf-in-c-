#include "printf.h"
#include <stdarg.h>


int add(int len, ...)
{
  va_list list;
  va_start(list, len);

  int sum = 0;
  int i = 0;
  while (i < len)
  {
    sum += va_arg(list, int);
    i++;
  }
  va_end(list);
  return sum;
}
// int ft_printf(const char *format, ...)
// {
//   va_list list;
//   va_arg(len,int )
// }