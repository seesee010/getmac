// Copyright (c) 2026 seesee010.
// see License file for more informations.
// (GPL-2.0 License)

#ifdef __WIN32
#define GETMAC_RUN "getmac"
#define GETMAC_ALL "getmac /v"

#elif __linux__
#define GETMAC_RUN "cat /sys/class/net/*/address"
#define GETMAC_ALL "grep . /sys/class/net/*/address"

#endif
#include <stdlib.h>

int main(int argc, char **argv) {
	(void)argv; // let the compile know that this arg is unused

	// it is intended that the user will use "-a"
	// but: he could also use something else...
	// This way the code is even "faster"
	if (argc > 1) {
		// using -a
		system(GETMAC_ALL);
		return 0;
	}

	system(GETMAC_RUN);
	return 0;
}
