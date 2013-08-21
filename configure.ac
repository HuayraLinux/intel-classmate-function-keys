#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.63])
AC_INIT([fnkey], [1.0], [rhettx.huang@intel.com])
AC_CONFIG_SRCDIR([fnkey.cpp])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE(fnkey,1.0.2.20130220)

# Checks for programs.
#AC_PROG_AWK
AC_PROG_CXX
#AC_PROG_CC

# Checks for libraries.
LIBS=`pkg-config --libs gtk+-2.0 x11 gthread-2.0 xtst`

# Checks for header files.
AC_PATH_X
AC_CHECK_HEADERS([fcntl.h stdlib.h string.h sys/ioctl.h syslog.h])
CPPFLAGS=`pkg-config --cflags gtk+-2.0 x11`


# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_PID_T

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset mkfifo strchr strerror strstr])

#AC_CONFIG_FILES([data/Images/Makefile])
AC_OUTPUT([Makefile])
