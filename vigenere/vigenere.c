#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char * keyword[])
{

  int cipher[24], i, n;
  bool passed = false;
  char * message = malloc(256);

  do {
    if (argc != 2) {
      printf("Error\n");
      return 1;
    }
    else {
      // cipher[i] is the ACII code of each number.
      for (i = 0, n = strlen(keyword[1]); i < n; i++) {
        cipher[i] = keyword[1][i];
        printf("%i\n", cipher[i]);
      }
      passed = true;
    }
  } while(!passed);

  // Prompt the user for a message to encrypt
  printf("Enter your secret message\n");
  fgets(message, 256, stdin);

  // Iterate the message
  for (i = 0, n = strlen(message); i < n - 1; i++) {
    printf("%c\n", message[i] + cipher[i]);

  }




}
