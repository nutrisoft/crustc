#include <stdio.h>

struct Book {
  char *name;
  int ISBN;
  float price;
};

typedef struct {
  char *name;
  int ISBN;
  float price;
} Book2;

int main() {
  struct Book book;
  book.name = "Harry Potter";
  book.ISBN = 12345;
  book.price = 5000;

  printf("Name: %s\n", book.name);
  printf("ISBN: %d\n", book.ISBN);
  printf("Price: %f\n", book.price);

  Book2 book2;

  book2.name = "Harry Potter";
  book2.ISBN = 12345;
  book2.price = 5000;

  printf("Name: %s\n", book2.name);
  printf("ISBN: %d\n", book2.ISBN);
  printf("Price: %f\n", book2.price);

  return 0;
}