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

Console console;
