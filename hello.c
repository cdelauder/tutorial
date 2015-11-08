#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  int c;
  for (c=0; getchar() != EOF; ++c) {
    printf("%d\n", c);
  }
  return 0;
}


