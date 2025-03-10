#ifndef TESTLIB_GLOBAL_H
#define TESTLIB_GLOBAL_H

#if defined(TESTLIB_LIBRARY)
#define DLLEXPORT __attribute__((visibility("default")))
#else
#define DLLEXPORT
#endif

#endif // TESTLIB_GLOBAL_H
