#include "log.h"
#include <stdio.h>

int main(void) {
  int size = 5;
  int numbers[size];
  int sum = 0;

  for (int i = 0; i < size; ++i) {
    log_trace("Value of i line 10 :%d", i);

    numbers[i] = i;
    log_trace("Value of numbers numbers[i]:%d", numbers[i]);
    sum += numbers[i];
    log_trace("Value of sum: %d when i is: %d\n", sum, i);
  }

  printf("The sum is: %d\n", sum);

  return 0;
}
