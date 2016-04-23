#include <stdio.h>
#include <stdlib.h>

struct User
{
  int age;
  char *name;
};

int main()
{
  int num;
  printf("Enter number:\n");
  scanf("%d", &num);
  printf("Entered: %d\n", num);
  getchar();

  for ( ; num < 100; num++)
  {
    printf("%d ", num);
  }

  printf("\nRandom: %d\n", rand());

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
  

  return 0;
}

int get_page(int *p)
{
  printf("%p\n", p);
  printf("%d\n", *p);
  return 1;
}
