#ifndef Communication_h
#define Communication_h

#include "Arduino.h"
#include "stdio.h"

class Communication {
	public:
		void begin(long speed);
		void log(const char format[], ...);
};

extern Communication communication;

#endif
