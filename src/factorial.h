#ifndef _FACTORIAL_H
#define _FACTORIAL_H 1

extern "C"
{
  extern int factorial (int n);

  class Fact
  {
    int v = 0;
  public:
    Fact (void);
    Fact (int n);
    ~Fact (void);
    int value (void);
  };
}

#endif
