#include <string>
#include <iostream>
#include <discid/discid.h>

#include "nbind/api.h"


class DiscId {

public:
	static std::string getRuntimeEnv() {
#		if defined(BUILDING_NODE_EXTENSION)
			return("native");
#		elif defined(EMSCRIPTEN)
			return("asm.js");
#		else
			return("unknown");
#		endif
	}
};

#include "nbind/nbind.h"

#ifdef NBIND_CLASS

NBIND_CLASS(DiscId) {
	method(getRuntimeEnv);
}

#endif
