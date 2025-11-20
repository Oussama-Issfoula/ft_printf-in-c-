#include "printf.h"
#include <stdarg.h>


static int checker(char format, va_list *list)
{
  if (format == 'c')
    return ft_putchar(va_arg(*list, int));

  else if (format == 's')
    return ft_putstr(va_arg(*list, char *));

  else if (format == 'd' || format == 'i')
    return ft_putnbr(va_arg(*list, int));

  else if (format == '%')
    return ft_putchar('%');

    return (0);
}

int ft_printf(const char *format, ...)
{
  int count;

  va_list list;
  count = 0;
  
  va_start(list, format);

  while (*format)
  {
    if (*format == '%')
    {
      format++;
      count += checker(*format, &list);
    }else
    {
      count += ft_putchar(*format);
      //format++;
    }
    format++;
  }

  va_end(list);
  return count;
}

// int main() {
  
//     // int result = add(3, 1, 2, 3);
//     // printf("result = %d\n", result);
//     int i = ft_printf("oussama issfoula\n");
//     ft_printf("i = %d\n", i);
//     return 0;
// }






// int ft_printf(const char *format, ...)
// {
//   va_list list;
//   va_start(list, format);
//   int len = 0;
//   while (*format)
//   {
//     if (*format == '%')
//     {
//       format++;
//       if (*format == 'd')
//       {
//         len += ft_putnbr(va_arg(list, int));
//       }
//       else if (*format == 's')
//       {
//         len += ft_putstr(va_arg(list, char *));
//       }
//     }
//     else
//     {
//       len += ft_putchar(*format);
//     }
//     format++;
//   }
//   va_end(list);
//   return len;
// }













// int add(int len, ...)
// {
//   va_list list;
//   va_start(list, len);

//   int sum = 0;
//   int i = 0;
//   while (i < len)
//   {
//     sum += va_arg(list, int);
//     i++;
//   }
//   va_end(list);
//   return sum;
// }