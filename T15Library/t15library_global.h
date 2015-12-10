#ifndef T15LIBRARY_GLOBAL_H
#define T15LIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(T15LIBRARY_LIBRARY)
#  define T15LIBRARYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define T15LIBRARYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // T15LIBRARY_GLOBAL_H
