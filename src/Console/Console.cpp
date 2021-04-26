#include "Console.h"

void Console::begin(long speed) {
	Serial.begin(speed);
}

void Console::log(const char format[], ...) {
	char buf[PRINTF_BUF];
	va_list ap;

	va_start(ap, format);
	vsnprintf(buf, sizeof(buf), format, ap);
	
	Serial.print(buf);
}

void Console::start_timer() {
	start_time = millis();
}

unsigned int Console::read_timer() {
	return millis() - start_time;
}

Console console;
