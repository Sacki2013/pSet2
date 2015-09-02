#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

  // Initialize variables and a boolean set to false to hold the user
  // in the do loop untill they satisfy criteria.
  bool passed = false;
  int key = 0;
  int length = 0, i, n;
  char *phrase = malloc(256);

  // Do while loop works off the boolean. If argc is not 2 then fail
  // thus ensures the user only adds one thing after program name
  // Else it converts to from string to int using 'atoi' the while
  // changes passed to true.
  do {
    if (argc != 2) {
      printf("Error\n");
      return 1;
    } else {
        key = atoi(argv[1]);
        printf("%d\n", key);
        passed = true;
    }
  } while(!passed);

  // Prompt the user for something to encrypt. Then store in phrase.
  printf("What would you like to encrypt?\n");
  fgets(phrase, 256, stdin);

  for (i = 0, n = strlen(phrase); i < n; i++) {
    printf("%c", phrase[i]+key);
  }

}
