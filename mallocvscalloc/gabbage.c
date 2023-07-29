#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {

  int size = 0;
  int *junk = 0;
  srand( time(0) );

  for (int i = 0; i < 1000; i++)
  {
    size = rand() % 16000;
    junk = malloc( size * sizeof(int) );
    for (int j = 0; j < size; j++)
    {
      junk[j] = rand();
    }
    free(junk);
  }

  int *array;
  array = calloc( 1000, sizeof(int) );
  //array = malloc( 1000 * sizeof(int) );
  for (int i = 0; i < 1000; i++)
    printf("%d", array[i]);
  free(array);
  printf("\n");

  return 0;
}