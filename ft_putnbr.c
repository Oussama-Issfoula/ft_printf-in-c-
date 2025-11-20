#include<unistd.h>
#include "printf.h"

int ft_putnbr(int n)
{
  long num;

  num = n;

  if(num == -2147483648)
    write (1, "-2147483648" , 11);

  else if (num < 0)
  {
    ft_putchar('-');
    num = -num;
  }

  else if(num >= 10)
  {
    ft_putnbr(num/10);
    ft_putnbr(num % 10);
  }

  else
    ft_putchar(num + '0');
}

int main()
{
    ft_putnbr(-2147483648);
    return 0;
}


// #include<unistd.h>
// #include "printf.h"

// int ft_putnbr(int n)
// {
//     int len = 0;
//     long num = n;

//     if (num < 0)
//     {
//         len += ft_putchar('-');
//         num = -num;
//     }
//     if (num >= 10)
//         len += ft_putnbr(num / 10);
//     len += ft_putchar((num % 10) + '0');
//     return len;
// }

// int main()
// {
//     ft_putnbr(21);
//     return 0;
//}