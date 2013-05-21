bin_PROGRAMS = guiletest
guiletest_SOURCES = main.c 
dist_pkgdata_SCRIPTS = guile.scm
AM_CPPFLAGS = -DDATADIR='"$(pkgdatadir)/"' 
AM_CFLAGS = @GUILE_CFLAGS@ 
guiletest_LDADD = @GUILE_LIBS@