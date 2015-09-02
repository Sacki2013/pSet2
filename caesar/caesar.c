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

  // For loop to iterate the array. If isspace to input a space if one was
  // originally there. else if checks if its upper case and cycles the keys along
  // ASCII if not upper then it goes to lower case algorithm
  for (i = 0, n = strlen(phrase); i < n; i++) {
    if (isspace(phrase[i])) {
      printf(" ");
    } else if (isupper(phrase[i])) {
      char c = (((int)phrase[i] - 65 + key ) % 26 ) + 65;
      printf("%c", c);
    }
    else {
      char c = (((int)phrase[i] - 97 + key ) % 26 ) + 97;
      printf("%c", c);
    }
  }
  printf("\n");
}
