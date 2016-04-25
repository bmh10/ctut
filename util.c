#include "util.h"

extern int global;

int add(int a, int b)
{
  return a + b;
}

int gb()
{
  return global;
}

static int sub(int a, int b)
{
  return a - b;
}
