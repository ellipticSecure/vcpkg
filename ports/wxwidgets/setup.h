#ifdef _DEBUG
#ifdef __APPLE__
#include "../../debug/lib/wx/include/osx_cocoa-unicode-static-3.1/wx/setup.h"
#else
#include "../../debug/lib/mswud/wx/setup.h"
#endif
#else
#ifdef __APPLE__
#include "../../lib/wx/include/osx_cocoa-unicode-static-3.1/wx/setup.h"
#else
#include "../../lib/mswu/wx/setup.h"
#endif
#endif
