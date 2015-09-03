#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char * keyword[])
{

  int cipher[24], cipherLower[24], i, n;
  bool passed = false;
  char * message = malloc(256);

  do {
    if (argc != 2) {
      printf("Error\n");
      return 1;
    }
    else {
      for (i = 0, n = strlen(keyword[1]); i < n; i++) {
        if (isupper(keyword[1][i])) {
          cipher[i] = keyword[1][i] - 65;
        }
        else {
          cipherLower[i] = keyword[1][i] - 97;
        }
      }
      passed = true;
    }
  } while(!passed);

  printf("Enter your secret message\n");
  fgets(message, 256, stdin);

  for (i = 0, n = strlen(message); i < n - 1; i++) {
    if (isupper(message[i])) {
      char c = (((int)message[i] - 65 + cipher[i] ) % 26 ) + 65;
      printf("%c", c);
    }
    else {
      char c = (((int)message[i] - 97 + cipherLower[i] ) % 26 ) + 97;
      printf("%c", c);
    }
  }
  printf("\n" );
}
