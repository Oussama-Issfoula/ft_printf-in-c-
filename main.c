#include "printf.h"
#include <stdio.h>


int main() {
  
    // int result = add(3, 1, 2, 3);
    // printf("result = %d\n", result);
    int i = ft_printf("oussama issfoula fi 3omri  %d lharhf lawla  fi smiti  %c ana fi 2030 %s \n", 23, 'o', "millyardir");
    ft_printf("i = %d\n", i);
    return 0;
}













// int add(int len, ...);
// // {
// //     va_list list;
// //     va_start(list, len);

// //     int sum = 0;
// //     for (int i = 0; i < len; i++)
// //     {
// //         sum += va_arg(list, int);
// //     }
// //     va_end(list);
// //     return sum;
// // }