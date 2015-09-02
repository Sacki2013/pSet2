#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/* Maximum name size + 1. */
#define MAX_NAME_SZ 256

int main(int argC, char *argV[]) {
    /* Allocate memory and check if okay. */
    char *name = malloc (64);
    char i, j, k;
    int n;
    if (name == NULL) {
        printf ("No memory\n");
        return 1;
    }

    /* Ask user for name. */
    printf("What is your name? ");

    /* Get the name, with size limit. */
    fgets (name, 64, stdin);

    for (i = 0, n = strlen(name); i < n; i++) {
      char *firstInit = malloc(8);
      if (i == 0) {
        printf("%c\n", name[i]);
      }   else if (isspace(name[i])) {
            printf("%c\n", name[i+1]);
      }
    }

    /* Free memory and exit. */
    free (name);
    return 0;
}
