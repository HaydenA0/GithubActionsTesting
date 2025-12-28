#include "lib.h"
#include <assert.h>
#include <stdio.h>

int main() {

  printf("Testing...");
  int output = libCustomFunction();
  assert(output == -1);
  printf("Test passed !");
  return 0;
}
