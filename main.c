#include "printf.h"
#include <stdio.h>

int add(int len, ...);
// {
//     va_list list;
//     va_start(list, len);

//     int sum = 0;
//     for (int i = 0; i < len; i++)
//     {
//         sum += va_arg(list, int);
//     }
//     va_end(list);
//     return sum;
// }

int main() {
  
    // int result = add(3, 1, 2, 3);
    // printf("result = %d\n", result);
    int i = printf("oussama issfoula\n");
    printf("i = %d\n", i);
    return 0;
}