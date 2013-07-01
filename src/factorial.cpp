#include "factorial.h"

int
factorial (int n)
{
  if (n <= 1)
    return 1;
  else
    return n * factorial (n - 1);
}

Fact::Fact (void)
{
  v = 0;
}

Fact::Fact (int n)
{
  v = factorial (n);
}

Fact::~Fact (void)
{
}

int
Fact::value (void)
{
  return v;
}
