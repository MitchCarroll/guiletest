#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#ifdef HAVE_LIBGUILE
#include <guile/gh.h>
#endif
#ifdef HAVE_LIBGL
#include <GL/gl.h>
#endif
#ifdef HAVE_LIBGLU
#include <GL/glu.h>
#endif
#ifdef HAVE_LIBGLUT
#include <GL/glut.h>
#endif
#include <stdio.h>
#include <stdlib.h>

SCM helloWorld()
{
  printf("Hello, world!\n");
  return SCM_EOL;
}

void init(int argc, char **argv)
{
  gh_new_procedure("hello-world", helloWorld, 0,0,0);
  gh_new_procedure("main-loop", glutMainLoop, 0,0,0);
  gh_repl(argc,argv);
}

int main(int argc, char **argv)
{
  glutInit(&argc,argv);
  glutInitWindowSize(512,512);
  glutInitWindowPosition(10,10);
  glutCreateWindow(PACKAGE_STRING);
  glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE|GLUT_DEPTH);
  gh_enter(argc,argv,init);
  return 0;
}
