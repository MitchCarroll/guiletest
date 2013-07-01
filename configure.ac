#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([guiletest], [0.3], [c.mitch.carroll@gmail.com])
AM_INIT_AUTOMAKE
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC
AC_PROG_CXX
LT_INIT
AC_ENABLE_SHARED

# Check for Guile
PKG_CHECK_MODULES([GUILE], [guile-1.8])
# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT
