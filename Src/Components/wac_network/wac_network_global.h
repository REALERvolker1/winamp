#ifndef NULLSOFT_WAC_NETWORK_GLOBAL_H
#define NULLSOFT_WAC_NETWORK_GLOBAL_H

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(WAC_NETWORK_LIB)
#  define WAC_NETWORK_EXPORT Q_DECL_EXPORT
# else
#  define WAC_NETWORK_EXPORT Q_DECL_IMPORT
# endif
#else
# define WAC_NETWORK_EXPORT
#endif

#endif // !NULLSOFT_WAC_NETWORK_GLOBAL_H