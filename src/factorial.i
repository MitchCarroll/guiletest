%module factorial 
%{
#include "factorial.h"
%}

%include ./factorial.h 
%scheme %{
  (load-extension "libfactorial" "scm_init_factorial_factorial_module") 
%}
