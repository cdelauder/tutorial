#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  int c;
  while ((c = getchar()) != EOF) {
    printf("%d\n", getchar() != EOF);
    putchar(c);
  }
  printf("%d\n", getchar() != EOF);
  return 0;
}


