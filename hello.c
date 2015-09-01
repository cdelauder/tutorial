#include <stdio.h>

int main()
{
  printf("\nfarhenheit to celsius conversion\n_________________________________\n\n");
  float fahr, celsius;
  float lower, step, upper;
  lower = 0;
  upper = 300;
  step = 20;
  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  printf("_________________________________\n\ncelsius to farhenheit conversion\n_________________________________\n\n");
  celsius = lower;
  while (celsius <= upper) {
    fahr = ((9.0 / 5.0) * celsius) + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}


