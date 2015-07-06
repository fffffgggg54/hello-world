#include <stdio.h>
int main()
{
 float f, c;
 float l, u, s, uu, y;
 l = 0;
 u = 300;
 y = 2;
 s = 20;
 f = l;
 uu = 100;
 puts("conversion table");

 while (f <= u)
 {
  c = 5 * (f-32) / 9;
  printf("%3.0f f %6.1f c\n", f, c);
  f = f + s;
 }
 puts("conversion table");
 c = 0;
 while(c <= uu)
 {
  f = c * 1.8 + 32;
  printf("%3.0f c %6.1f f\n", c, f);
  c = c + y;
 }
}
