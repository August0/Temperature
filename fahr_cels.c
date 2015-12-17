/* fahr_cels.c */

/* stampa una tabella di conversione
 * da gradi fahrenheit a celsius
 */

#include <stdio.h>

int main()
{
  float cels, fahr;
  int lower, upper, step;
 printf("Questa tabella converte i gradi celsius in fahrenheit\n");
  lower = 0;
  upper = 300;
  step = 20;
  
  fahr = lower;
  while (fahr <= upper) {
    cels = (5./9.) * (fahr-32.);
    printf(" %3.0f %6.1f\n", fahr, cels);

    fahr = fahr + step;
  }

  return 0;
}
