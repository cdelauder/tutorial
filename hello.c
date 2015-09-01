#include <stdio.h>

int main()
{
  printf("\nfarhenheit to celsius conversion\n_________________________________\n\n");
  float fahr, celsius;
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3.0f\t%6.1f\n", fahr, (fahr + 32) * (5.0 / 9.0));
  printf("_________________________________\n\ncelsius to farhenheit conversion\n_________________________________\n\n");
  for (celsius = 300; celsius >= 0; celsius = celsius - 20)
    printf("%3.0f\t%6.1f\n", celsius, (celsius * (9.0 / 5.0)) - 32);
  return 0;
}


