#ifndef Console_h
#define Console_h

#include "Arduino.h"
#include "stdio.h"

class Console {
	public:
		void begin(long speed);
		void log(const char format[], ...);
		void start_timer();
		unsigned int read_timer();

	private:
		unsigned long start_time;
};

extern Console console;

#endif
