#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

int main()
{
  printf("\nfarhenheit to celsius conversion\n_________________________________\n\n");
  float fahr, celsius;
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3.0f\t%6.1f\n", fahr, (fahr + 32) * (5.0 / 9.0));
  printf("_________________________________\n\ncelsius to farhenheit conversion\n_________________________________\n\n");
  for (celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP)
    printf("%3.0f\t%6.1f\n", celsius, (celsius * (9.0 / 5.0)) - 32);
  return 0;
}


