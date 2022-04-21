#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 srand (time (NULL));
  int dado = (rand() % 8) + 1;
  if (dado < 6) printf("%d\n", dado);
  else          printf("6\n");
  return 0;
}
