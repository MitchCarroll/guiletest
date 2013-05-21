#include <libguile.h>
#include <stdio.h>
#include <stdlib.h>

SCM helloWorld()
{
  printf("Hello, world!\n");
  return SCM_EOL;
}

void init(int argc, char **argv)
{
  return 0;
}

int main(int argc, char **argv)
{
  scm_init_guile();
  scm_c_primitive_load("guile.scm");
  scm_call_0(scm_variable_ref(scm_c_lookup("test")));
  scm_shell(argc,argv);
  return 0;
}
