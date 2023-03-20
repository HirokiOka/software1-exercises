#include <stdio.h>

int main(int argc, char** argv) {
  int N = argc;
  int vals[N];
  for (int i = 1; i < N + 1; ++i) {
    vals[i] = argv[i];
    printf("%s", argv[i]);
  }
  /*
  for (int i = 0; i < 10; ++i) {
    printf("%d:\n", i);
  }
  */
}
