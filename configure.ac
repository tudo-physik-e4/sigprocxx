# Initialization

AC_INIT([SigProCxx], [0], [], [sigprocxx])

AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall -Werror])


# Libtool init and language selection

AC_LIBTOOL_DLOPEN
AC_PROG_LIBTOOL
AC_PROG_CXX

CXX_PROJECT_INIT


# Checks for dependencies

ROOTSYS_DEPS([glibs], [])

CXX_PROJECT_DEPS([])


# Output

AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([
	Makefile
	sigprocxx.pc
	sigprocxx-config
	src/Makefile
	doc/Makefile doc/Doxyfile
])

AC_OUTPUT