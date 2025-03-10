#ifndef TESTLIB_HPP
#define TESTLIB_HPP

#include "testlib_global.h"

#include <QString>

class DLLEXPORT A
{
public:
   virtual ~A() = default; // Ensure RTTI is generated
   virtual QString getString() = 0;
};

class DLLEXPORT B: virtual public A {
public:
   virtual ~B() = default; // Ensure RTTI is generated
   virtual QString getName() = 0;
};

class DLLEXPORT C: virtual public A {
public:
   virtual ~C() = default; // Ensure RTTI is generated
   virtual QString getValue() = 0;
};

class D: virtual public B, public C{
public:
   QString getString() override;
   QString getName() override;
   QString getValue() override;
};

template <class X, class Y>
DLLEXPORT X* inside_cast(Y* instance);

extern "C" DLLEXPORT A *createClass();

#endif // TESTLIB_HPP
