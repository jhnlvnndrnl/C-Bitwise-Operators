#include <stdio.h>

int main()
{

   // & = AND
   // | = OR
   // ^ = XOR
   // <<  left shift
   // >>  right shift

   int x = 6;  //    6 = 00000110
   int y = 12; // 12 = 00001100 
   int z = 0;  //    0 = 00000000

    z = x & y;
    printf("AND = %d\n", z); // 4

    z = x | y;
    printf("OR = %d\n", z); // 14

    z = x ^ y;
    printf("XOR = %d\n", z); // 10

    z = x << 2;
    printf("SHIFT LEFT = %d\n", z); // 24

    z = x >> 2;
    printf("SHIFT RIGHT = %d\n", z); // 1

    return 0;
}