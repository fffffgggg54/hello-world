// Fredo's hello world
#include  <stdio.h>
int text()
{
  for(int l = 0;l < 100;l++){
    printf("This line is: ");
    printf("%3x or %3d ",l + 1, l + 1);
    printf("hello world.\n");
  }
}

int main()
{
 text();
 return 0;
}
