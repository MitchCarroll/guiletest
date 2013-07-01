ACLOCAL_AMFLAGS = '-I m4'
lib_LTLIBRARIES = libfactorial.la
libfactorial_la_SOURCES = factorial.h factorial.cpp factorial_wrap.cpp
libfactorial_la_LIBADD = @GUILE_LIBS@
bin_PROGRAMS = guiletest
guiletest_SOURCES = main.cpp factorial.h
dist_pkgdata_SCRIPTS = guile.scm
AM_CPPFLAGS = -DDATADIR='"$(pkgdatadir)/"' @GUILE_CFLAGS@ 
guiletest_LDADD = -lfactorial @GUILE_LIBS@

factorial_wrap.cpp: factorial.i factorial.h
	swig -c++ -guile -Linkage passive -proxy -package factorial \
		-o factorial_wrap.cpp factorial.i