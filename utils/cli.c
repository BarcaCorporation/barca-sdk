#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char **argv) {
  printf ("Barca CLI v2.0 BETA");
  for (int i = 1; i < argc; i++) {
    printf("Argument %d: [%s]\n", i, argv[i]);
  }
  getch();
}
