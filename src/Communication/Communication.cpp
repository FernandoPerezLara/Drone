#include "Communication.h"

void Communication::begin(long speed) {
	Serial.begin(speed);
}

void Communication::log(const char format[], ...) {
	char buf[PRINTF_BUF];
	va_list ap;

	va_start(ap, format);
	vsnprintf(buf, sizeof(buf), format, ap);
	
	Serial.print(buf);
}

Communication communication;
