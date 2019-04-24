#include <stdio.h>

long linear_search(long *pointer, long n, long find)
{
   long c;

   for (c = 0; c < n; c++) {
      if (*(pointer+c) == find)
         return c;
   }

   return -1;
}
