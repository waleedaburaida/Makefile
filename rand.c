#include <stdio.h>
#include <stdlib.h>
int main() {
  int x, y;
  for (x = 1; x <= 50; ++x) {
    y = rand() % 100 + 1;
    printf("%d\n", y);
  }

  return 0;
}