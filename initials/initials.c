#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argC, char *argV[]) {
    // Initialize variables.
    // 'char *name = malloc(64)' = Allocating memory (64bits) to the array
    char *name = malloc (64);
    char i, j, k;
    int n;

    // Prompt the user for thier name
    printf("What is your name? ");

    // Store the name in the 'char *name' variable using 'fgets' (max '64')
    // 'stdin' = standard input (Keyboard)
    fgets (name, 64, stdin);

    // Using a for loop and 'strlen' (string length) of 'name' - to iterate
    // through the charaters.
    for (i = 0, n = strlen(name); i < n; i++) {
      // Using an if statement to checked if 'i' is the first point in the
      // array[0] thus the first letter. 'toupper' changes the case.
      if (i == 0) {
        printf("%c", toupper(name[i]));
          // Using an else if and 'isspace' to check if 'i' is a space, then
          // printf to output 'i+1' which is the start of the next word.
      }   else if (isspace(name[i])) {
            printf("%c", toupper(name[i+1]));
      }
    }

    // New line free malloc memory and quit
    printf("\n");
    free (name);
    return 0;
}
