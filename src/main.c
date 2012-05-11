#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdio.h>
#ifdef HAVE_LIBGUILE
#include <guile/gh.h>
#endif

void init(int argc, char **argv)
{
  gh_repl(argc,argv);
}

int main(int argc, char **argv)
{
  
  gh_enter(argc,argv,init);
  return 0;
}
