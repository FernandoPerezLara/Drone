#ifndef Console_h
#define Console_h

#include "Arduino.h"
#include "stdio.h"

class Console {
	public:
		void begin(long speed);
		void log(const char format[], ...);
};

extern Console console;

#endif
