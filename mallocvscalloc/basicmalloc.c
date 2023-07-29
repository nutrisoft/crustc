#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int main() {

  char *word1 = malloc(sizeof(char));


  printf("Enter the Word you will like to copy: ");
  scanf("%s", word1);

  char *t = malloc(strlen(word1) + 1);

  for (int i = 0, n = strlen(word1) + 1; i < n; i++) {
    t[i] = word1[i];
  }

  t[0] = toupper(t[0]);

  printf("original: %s\n", word1);
  printf("copied: %s\n", t);

  free(t);
  free(word1);
}