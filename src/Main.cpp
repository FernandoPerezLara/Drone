#include "Arduino.h"

#include "Communication/Communication.h"
#include "Motor/Motor.h"

Motor motor(1, 2, 3, 4);

void setup() {
	communication.begin(9600);
	motor.begin(1000, 2000);
}

void loop() {
	
}
