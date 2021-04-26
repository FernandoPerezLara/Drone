#include "Arduino.h"

#include "Console/Console.h"
#include "Motor/Motor.h"

Motor motor(1, 2, 3, 4);

void setup() {
	console.begin(9600);
	motor.begin(1000, 2000);
}

void loop() {
	
}
