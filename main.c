

#include "lib.h"
#include <stdio.h>
int main() {
  printf("Hello world\n");
  // small change
  int output = libCustomFunction();
  return 1 + output;
}
