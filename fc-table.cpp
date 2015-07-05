#include <stdio.h>
int main()
{
 float f, c;
 float l, u, s;
 l = 0;
 u = 300;
 s = 20;
 f = l;
 puts("conversion table");

 while (f <= u)
 {
  c = 5 * (f-32) / 9;
  printf("%3.0f f %6.1f c\n", f, c);
  f = f + s;
 }
}
