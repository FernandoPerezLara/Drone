#include "Arduino.h"

#include "Console/Console.h"
#include "Motor/Motor.h"

Motor motor(1, 2, 3, 4);

void setup() {
	console.begin(9600);
	motor.begin(1000, 2000);
}

void loop() {
	console.start_timer();

	delay(1000);

	console.log("Time: %d \n", console.read_timer());
}
