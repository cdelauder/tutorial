#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  int c;
  c = getchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}


