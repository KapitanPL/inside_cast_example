#include "testlib.hpp"

QString D::getString()
{
   return "String";
}

QString D::getName()
{
   return "name";
}

QString D::getValue()
{
   return "value";
}

A *createClass()
{
   return new D;
}

template <class X, class Y>
X* inside_cast(Y* instance) {
   return dynamic_cast<X*>(instance);
}

// Explicit template instantiations to force them inside the shared library
template DLLEXPORT B* inside_cast<B, A>(A* instance);
template DLLEXPORT C* inside_cast<C, A>(A* instance);
template DLLEXPORT D* inside_cast<D, A>(A* instance);
