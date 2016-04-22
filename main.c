#include <stdio.h>
#include <stdlib.h>

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
  //printf("Page: %d\n", get_page(num));
  return 0;
}

int get_page(int *p)
{
  return *p;
}
