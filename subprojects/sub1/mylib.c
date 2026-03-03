#include "mylib.h"

void print_message(void) {
  #ifdef TEST
  printf("OK. TEST defined.\n");
  #else
  printf("TEST NOT defined.\n");
  #endif
}
