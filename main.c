#include <stdio.h>
#include <stdlib.h>
#include "util.h"

int global = 5;

enum Flavour
{
  Chocolate,
  Banana
};

struct User
{
  int age;
  char *name;
};

void loopEx(int num)
{
  for ( ; num < 100; num++)
  {
    printf("%d ", num);
  }
}

void string_funcs()
{
  char *s1 = "ben";
  char *s2 = "benj";
  strcmp(s1, s2);
}

void file_funcs()
{
  FILE *f;
}

int main()
{
  int num;
  puts("Using puts to print a string");
  printf("Enter number:\n");
  scanf("%d", &num);
  printf("Entered: %d\n", num);
  getchar();
  loopEx(num);

  int *p = &num;
  printf("Page: %d\n", get_page(p));

  struct User ben;
  struct User *up;
  up = &ben;
  ben.age = 24;
  char *n = "Benjamin";
  ben.name = malloc(strlen(n) + 1);
  strcpy(ben.name, n); 
  printf("%s is %d\n",up->name, up->age);
  free(ben.name);
 
  num = add(1, 2); 
  printf("%d\n", num);
  printf("%d\n", gb());
  return 0;
}

int get_page(int *p)
{
  printf("%p\n", p);
  printf("%d\n", *p);
  return 1;
}
