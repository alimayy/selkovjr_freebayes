#ifndef FREEBAYES_SEGFAULTHANDLER_H
#define FREEBAYES_SEGFAULTHANDLER_H

#include <stdio.h>
#ifndef __CYGWIN__
#include <execinfo.h>
#endif
#include <signal.h>
#include <stdlib.h>

void segfaultHandler(int sig);

#endif
