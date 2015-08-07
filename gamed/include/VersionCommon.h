#ifndef __VERSION_COMMON_H__
#define __VERSION_COMMON_H__

// Split up code by contributor, this allows modules to be disabled if bugs occur.

#define __DRESDENJOHN

// Use #ifdef/#else/#endif clauses to allow for easier debugging.

#ifdef __DRESDENJOHN

	#define __PATH_BY_LUA // Allows end user to set path to client via config.lua

#endif


#endif	/* __VERSION_COMMON_H */

