#include <stdio.h>
int main()
{
 int f, c;
 int l, u, s;
 l = 0;
 u = 300;
 s = 20;
 f = l;
 while (f <= u)
 {
  c = 5 * (f-32) / 9;
  printf("%d\t%d\n", f, c);
  f = f + s;
 }
}
