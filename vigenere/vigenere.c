#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Function to check if alphabet characters.
int alphaCheck(char * argv[]) {
  int length = strlen(argv[1]), n;
  for (n = 0; n < length; n++) {
    if (!isalpha(argv[1][n])) {
      printf("Characters 'A-Z' for Keyword.\n");
      return 2;
    }
  }
}

int main(int argc, char * keyWord[]) {
  int cipher[64], i, j, k;
  char message[128];
  int keyCount = 0;
  int p = strlen(keyWord[1]);

  // Validation - using alphaCheck Function
  if (argc != 2 || alphaCheck(keyWord) == 2) {
    return 0;
  }

  // For loop to convert to upper and set value ie A = 0 B = 1
  for (i = 0, j = strlen(keyWord[1]); i < j; i++) {
    cipher[i] = (toupper(keyWord[1][i]) - 65);
  }

  // Prompt the user for the message to encrypt
  printf("Enter your secret message: ");
  fgets(message, 128, stdin);

  for (i = 0, k = strlen(message); i < k; i++) {
    if (isupper(message[i])) {
      char c = (message[i] - 65 + cipher[keyCount])  % 26 + 65;
      printf("%c", c);
      keyCount++;
    }
    else if (islower(message[i])) {
      char d = (message[i] - 97 + cipher[keyCount]) % 26 + 97;
      printf("%c", d);
      keyCount++;
    }
    else {
      printf("%c", message[i]);
    }
    if (keyCount >= p) {
      keyCount = 0;
    }
  }
}
