#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdio.h>
#ifdef HAVE_LIBGUILE
#include <guile/gh.h>
#endif

SCM helloWorld()
{
  printf("Hello, world!\n");
  return SCM_EOL;
}

void init(int argc, char **argv)
{
  gh_new_procedure("hello-world", helloWorld, 0,0,0);
  gh_repl(argc,argv);
}

int main(int argc, char **argv)
{
  
  gh_enter(argc,argv,init);
  return 0;
}
