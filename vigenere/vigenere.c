#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

  // Initialize variables and a boolean set to false to hold the user
  // in the do loop untill they satisfy criteria.
  bool passed = false;
  int length = 0, i, n, j, k;
  char *message = malloc(256);
  char *keyword = malloc(256);
  int cipher[1000];

  do {
    if (argc != 2) {
      printf("Error\n");
      return 1;
    } else {
        keyword = argv[1];
        printf("%s\n", keyword);
        passed = true;
    }
  } while(!passed);

  // Prompt the user for something to encrypt. Then store in phrase.
  printf("What would you like to encrypt?\n");
  fgets(message, 256, stdin);

  for (i = 0, n = strlen(keyword); i < n; i++) {
    char c = (((int)keyword[i] + 1));
// Working so far it can get input move it and output new one.
    printf("%c\n", (((int)c)));
  }
}
