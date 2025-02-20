#include <stdlib.h>
#include <stdio.h>

int main() {
  int returnValue = system("./hello-world");

  if (returnValue) {
    printf("TEST FAILED!\n");
  } else {
    printf("TEST SUCCEEDED\n");
  }
}